using System.Diagnostics;

namespace LinkLabel
{
    public partial class MyLink : Form
    {
        public MyLink()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
             Process.Start("kimbca.netlify.app"); // when user click link this will provide reference
        }

        private void linkLabel2_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Form2 f2 = new Form2();
            f2.Show();
        }
    }
}