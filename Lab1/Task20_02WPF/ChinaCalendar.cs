using System;

namespace Task20_02WPF
{
    public class ChinaCalendar
    {
        private string type;

        public ChinaCalendar(DateTime date)
        {
             find(date);
        }

        public string Type { get => type; set => type = value; }

        private void find(DateTime date)
        {
            if (date.Day >= 4 && date.Month == 2 || date.Day <= 5 && date.Month == 3)
            {
                //        4 февраля — 5 марта: Тигр

                Type = "Тигр";
            }
            if (date.Day >= 6 && date.Month == 3 || date.Day <= 4 && date.Month == 4)
            {
                //6 марта — 4 апреля: Кролик

                Type = "Кролик";
            }
            if (date.Day >= 5  && date.Month == 4 || date.Day <= 4 && date.Month == 5)
            {
                //5 апреля — 4 мая: Дракон

                Type = "Дракон";
            }
            if (date.Day >= 5 && date.Month == 5 || date.Day <= 5 && date.Month == 6)
            {
                //5 мая — 5 июня: Змея

                Type = "Змія";
            }
            if (date.Day >= 6 && date.Month == 6 || date.Day <= 6 && date.Month == 7)
            {

                //6 июня — 6 июля: Лошадь

                Type = "Кінь";
            }
            if (date.Day >= 7 && date.Month == 7 || date.Day <= 6 && date.Month == 8)
            {

                //7 июля — 6 августа: Коза

                Type = "Коза";
            }
            if (date.Day >= 7 && date.Month == 8 || date.Day <= 7 && date.Month == 9)
            {
                //7 августа — 7 сентября: Обезьяна

                Type = "Мавпа";
            }
            if (date.Day >= 8 && date.Month == 9 || date.Day <= 7 && date.Month == 10)
            {
                //8 сентября — 7 октября: Петух

                Type = "Півень";
            }
            if (date.Day >= 8 && date.Month == 10 || date.Day <= 6 && date.Month == 11)
            {

                //8 октября — 6 ноября: Собака

                Type = "Собака";
            }
            if (date.Day >= 7 && date.Month == 11 || date.Day <= 6 && date.Month == 12)
            {

                //7 ноября — 6 декабря: Свинья

                Type = "Свиня";
            }
            if (date.Day >= 7 && date.Month == 12 || date.Day <= 5 && date.Month == 1)
            {

                //7 декабря — 5 января: Крыса

                Type = "Свиня";
            }
            if (date.Day >= 6 && date.Month == 1 || date.Day <= 3 && date.Month == 2)
            {

                //6 января — 3 февраля: Бык

                Type = "Бик";
            }

        }

    }
}