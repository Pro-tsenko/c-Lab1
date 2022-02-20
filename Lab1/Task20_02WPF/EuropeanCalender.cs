using System;

namespace Task20_02WPF
{
    public class EuropeanCalender
    {
        private string type;

        public EuropeanCalender(DateTime time)
        {
            findType(time);
        }

        public string Type { get => type; set => type = value; }

        private void findType(DateTime time)
        {
            if (time.Day >= 21 && time.Month == 3 || time.Day <= 20 && time.Month == 4)
                {
                //            Овен

                //21 марта – 20 апреля
                Type = "Овен";
            }
            if (time.Day >= 21 && time.Month == 4 || time.Day <= 20 && time.Month == 5)
            {
                //Телец
                //21 апреля – 21 мая

                Type = "Телець";
            }
            if (time.Day >= 22 && time.Month == 5 || time.Day <= 21 && time.Month == 6)
            {
                //Близнецы
                //22 мая – 21 июня

                Type = "Близнець";
            }
            if (time.Day >= 22 && time.Month == 6 || time.Day <= 22 && time.Month == 7)
            {
                //Рак
                //22 июня – 22 июля

                Type = "Рак";
            }
            if (time.Day >= 23 && time.Month == 7 || time.Day <= 23 && time.Month == 8)
            {
                //Лев
                //23 июля – 23 августа

                Type = "Лев";
            }
            if (time.Day >= 24 && time.Month == 8 || time.Day <= 22 && time.Month == 9)
            {
                //Дева
                //24 августа – 22 сентября

                Type = "Діва";
            }

            if (time.Day >= 23 && time.Month == 9 || time.Day <= 23 && time.Month == 10)
            {
                //Весы
                //23 сентября – 23 октября

                Type = "Терези";
            }
            if (time.Day >= 24 && time.Month == 10 || time.Day <= 22 && time.Month == 11)
            {
                //Скорпион
                //24 октября – 22 ноября
                Type = "Скорпіон";
            }
            if (time.Day >= 23 && time.Month == 11 || time.Day <= 21 && time.Month == 12)
            {
                //Стрелец
                //23 ноября – 21 декабря
                Type = "Стрілець";
            }
            if (time.Day >= 22 && time.Month == 12 || time.Day <= 20 && time.Month == 1)
            {
                //Козерог
                //22 декабря – 20 января
                Type = "Козеріг";
            }
            if (time.Day >= 21 && time.Month == 1 || time.Day <= 18 && time.Month == 2)
            {
                //Водолей
                //21 января – 18 февраля

                Type = "Водоій";
            }

            if (time.Day >= 19 && time.Month == 2 || time.Day <= 20 && time.Month == 3)
            {
                //Рыбы
                //19 февраля – 20 марта

                Type = "Риби";
            }













           

        }
    }
}