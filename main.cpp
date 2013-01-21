#include <QtGui>
#include <QtSql>

int main(int argc, char *argv[])
{
  QStringList drivers = QSqlDatabase::drivers(); 
  for (int i=0 ; i < drivers.size() ; ++i)
    qDebug() << drivers[i];

  QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
  db.setHostName("192.168.20.8");
  db.setDatabaseName("my_db");
  db.setUserName("root");
  db.setPassword("3419014");
  bool ok = db.open();

  if(ok)
  {
    QString cmd="insert into tb_2 (mac, dev_name, ip, status) values(\"00:22:22:33:44:55\", \"weiya_dev\", \"192.168.20.32\", \"ok\" );";

    cmd = "update tb_2 set dev_name = \"eee\" where mac = '00:22:22:33:44:55';";

    QSqlQuery query(cmd);
  }


#if 0
  if(ok)
  {
    QSqlQuery query("SELECT * FROM table_time");
    while (query.next())
    {
      QString country = query.value(0).toString();
      qWarning() << country;
    }
  }
#endif
}
