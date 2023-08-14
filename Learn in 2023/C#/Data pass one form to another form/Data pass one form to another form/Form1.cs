namespace Data_pass_one_form_to_another_form
{
    public partial class Form1 : Form
    {
        public static String fName;
        public static String mName;
        public static String lName;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            fName = textBox1.Text;
            mName = textBox2.Text;
            lName = textBox3.Text;

            if (fName != null && mName != null && lName != null)
            {
                Form2 f2 = new Form2();
                f2.Show();
            }
            else
            {
                MessageBox.Show("Please enter values!!!");
            }
        }
    }
}