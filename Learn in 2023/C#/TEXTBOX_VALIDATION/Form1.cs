namespace TEXTBOX_VALIDATION
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            char ch = e.KeyChar;   // when you press the key this key store in ch
            if (char.IsDigit(ch))
            {
                e.Handled = false;
            }
            else if (ch == '.' || ch == 8)
            {
                e.Handled = false;
            }
            else
            {
                e.Handled = true;
            }
        }

        private void textBox2_KeyPress(object sender, KeyPressEventArgs e)
        {
            char ch = e.KeyChar;
            if ((char.IsLetter(ch))  || ch == 8)
            {
                e.Handled = false;
            }
            else
            {
                e.Handled = true ;
            }
        }
    }
}