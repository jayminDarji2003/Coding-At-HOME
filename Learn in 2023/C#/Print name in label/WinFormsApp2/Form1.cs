namespace WinFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            // MessageBox.Show("Form submitted successfully!!!");  //--> Show some information in Messagebox
            //MessageBox.Show(textBox1.Text); // show textbox text on Messagebox
            //MessageBox.Show("Your name is : " + textBox1.Text); // show textbox text on Messagebox

            label3.Text = textBox1.Text;
            label3.Visible = true;
        
        
        }
    }
}