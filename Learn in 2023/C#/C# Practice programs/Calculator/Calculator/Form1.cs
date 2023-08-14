namespace Calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(textBox1.Text != "" && textBox2.Text != "")
            {
                int num1 = int.Parse(textBox1.Text);
                int num2 = int.Parse(textBox2.Text);

                int result = num1 + num2;

                Result.Text = "Addition of two number is : " + result.ToString();
                Result.Visible = true;
            }
            else
            {
                MessageBox.Show("Please enter above field!!");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
            {
                int num1 = int.Parse(textBox1.Text);
                int num2 = int.Parse(textBox2.Text);

                int result = num1 - num2;

                Result.Text = "Subtraction of two number is : " + result.ToString();
                Result.Visible = true;
            }
            else
            {
                MessageBox.Show("Please enter above field!!");
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
            {
                int num1 = int.Parse(textBox1.Text);
                int num2 = int.Parse(textBox2.Text);

                int result = num1 * num2;

                Result.Text = "Multiplication of two number is : " + result.ToString();
                Result.Visible = true;
            }
            else
            {
                MessageBox.Show("Please enter above field!!");
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
            {
                int num1 = int.Parse(textBox1.Text);
                int num2 = int.Parse(textBox2.Text);

                int result = num1 / num2;

                Result.Text = "Division of two number is : " + result.ToString();
                Result.Visible = true;
            }
            else
            {
                MessageBox.Show("Please enter above field!!");
            }
        }
    }
}