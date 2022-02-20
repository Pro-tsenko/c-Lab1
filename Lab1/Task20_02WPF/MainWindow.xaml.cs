using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace Task20_02WPF
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private DateTime _selectedDate;

        public MainWindow()
        {
            InitializeComponent();
   

            //if (selectedDate.HasValue)
            //{
            //    string formatted = selectedDate.Value.ToString("dd.MM.yyyy", System.Globalization.CultureInfo.InvariantCulture);


            //}
        }


        private void Dp_DataContextChanged(object sender, DependencyPropertyChangedEventArgs e)
        {
            

            
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            DateTime? selectedDate = dp.SelectedDate;
            string formatted = selectedDate.Value.ToString("dd.MM.yyyy", System.Globalization.CultureInfo.InvariantCulture);// форматировано выводим
            DateTime userDate = dp.SelectedDate.Value;// дата введенная пользователем
            DateTime timeNow = DateTime.Now; // текущая дата
            var difference = (timeNow - userDate).Duration();// получаем разницу дат
            int uDay = userDate.Day;
            int tN = timeNow.Day;
            if (userDate.Day == timeNow.Day && userDate.Month == timeNow.Month)
            {
                MessageBox.Show("З днем народження!");

            }

            int age = difference.Days / 364;// получаем возраст
            if (age <= 0 || age >= 135)
            {
                MessageBox.Show("Помилка! Вік має бути більше 0 і менше 135!");
                return;
            }
            SelectedDataTextBox.Text = "Вік: " + age + " років." ;
            ChinaCalendar chinaCalendar = new ChinaCalendar(userDate);// получаем китайский знак зодиака
            СhinaSignTextBox.Text = chinaCalendar.Type;


            EuropeanCalender europeanCalender = new EuropeanCalender(userDate);// получаем европейский знак зодиака
            EuropeanSignTextBox.Text = europeanCalender.Type;

        }
    }
}
