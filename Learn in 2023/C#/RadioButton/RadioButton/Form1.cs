namespace RadioButton
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(radioButton1.Checked == true)
            {
                MessageBox.Show("You are from " + radioButton1.Text);
            }
            else if(radioButton2.Checked == true)
            {
                MessageBox.Show("You are from " + radioButton2.Text);
            }if(radioButton3.Checked == true)
            {
                MessageBox.Show("You are from " + radioButton3.Text);
            }
            else if(radioButton4.Checked == true)
            {
                MessageBox.Show("You are from " + radioButton4.Text);
            }
            else if(radioButton5.Checked == true)
            {
                MessageBox.Show("You are from " + radioButton5.Text);
            }
            else if(radioButton6.Checked == true)
            {
                MessageBox.Show("You are from " + radioButton6.Text);
            }
            else
            {
                MessageBox.Show("Please select country !!");
            }
        }

        private void btn2(object sender, EventArgs e)
        {
            if(radioButton7.Checked == true)
            {
                MessageBox.Show("You are : HINDU");
            }
            else if(radioButton8.Checked == true)
            {
                MessageBox.Show("You are : MUSLIM");
            }
            else if(radioButton7.Checked == true)
            {
                MessageBox.Show("You are : HINDU");
            }
        }

        private void radioButton6_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}