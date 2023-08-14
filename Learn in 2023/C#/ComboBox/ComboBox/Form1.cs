namespace ComboBox
{
    public partial class myComboBox : Form
    {
        public myComboBox()
        {
            InitializeComponent();
        }

        private void add_Click(object sender, EventArgs e)
        {
            if (textBox1.Text.Length != 0)
            {
                if (HobbiesComboBox.Items.Contains(textBox1.Text))
                {
                    MessageBox.Show("Already exits!!");
                }
                else
                {
                    HobbiesComboBox.Items.Add(textBox1.Text);
                    textBox1.Clear();
                    textBox1.Focus();
                }
            }
            else
            {
                MessageBox.Show("Please write something");
            }
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int count = HobbiesComboBox.Items.Count;
            MessageBox.Show("Total Items are : " + count.ToString());
        }

        private void button2_Click(object sender, EventArgs e)
        {
            HobbiesComboBox.Items.Remove(HobbiesComboBox.SelectedItem);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            HobbiesComboBox.Items.Clear();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            HobbiesComboBox.Sorted= true;
        }

        private void HobbiesComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            Result.Text = "Selected items is :  " + HobbiesComboBox.SelectedItem.ToString();
            Result.Visible = true;  
        }
    }
}