namespace Calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Add_Click(object sender, EventArgs e)
        {
            if(textBox1.Text != "" && textBox2.Text != "")
            {
                int num1 = int.Parse(textBox1.Text);
                int num2 = int.Parse(textBox2.Text);

                int result = num1 + num2;

                // MessageBox.Show("Addition is : " + result.ToString());

                Result.Text = "Addition of two number is : " + result.ToString();
                Result.Visible = true;
            }
            else
            {
                MessageBox.Show("Please enter numbers !!");
            }

        }

        private void Sub_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
            {
                int num1 = int.Parse(textBox1.Text);
                int num2 = int.Parse(textBox2.Text);

                int result = num1 - num2;

                // MessageBox.Show("subtraction is : " + result.ToString());

                Result.Text = "Subtraction of two number is : " + result.ToString();
                Result.Visible = true;
            }
            else
            {
                MessageBox.Show("Please enter numbers !!");
            }
        }

        private void Mul_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
            {
                int num1 = int.Parse(textBox1.Text);
                int num2 = int.Parse(textBox2.Text);

                int result = num1 * num2;

                // MessageBox.Show("Multiplicaton is : " + result.ToString());

                Result.Text = "Multiplication of two number is : " + result.ToString();
                Result.Visible = true;
            }
            else
            {
                MessageBox.Show("Please enter numbers !!");
            }
        }

        private void Div_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
            {
                int num1 = int.Parse(textBox1.Text);
                int num2 = int.Parse(textBox2.Text);

                int result = num1 / num2;

                // MessageBox.Show("Division is : " + result.ToString());

                Result.Text = "Division of two number is : " + result.ToString();
                Result.Visible = true;
            }
            else
            {
                MessageBox.Show("Please enter numbers !!");
            }
        }
    }
}