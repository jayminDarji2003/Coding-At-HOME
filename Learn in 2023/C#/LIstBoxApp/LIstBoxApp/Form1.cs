namespace LIstBoxApp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void add_Click(object sender, EventArgs e)
        {
            FruitslistBox.Items.Add(addItem.Text); // adding items to listbox
            addItem.Clear();    // clear textbox after adding value
            addItem.Focus();    // focuse on textbon after adding value
        }

        private void button1_Click(object sender, EventArgs e)
        { 
            int count = FruitslistBox.Items.Count;
            MessageBox.Show("Total fruits is : " + count.ToString());
        }

        private void button2_Click(object sender, EventArgs e)
        {
            FruitslistBox.Sorted= true;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            //FruitslistBox.Items.Remove(FruitslistBox.SelectedItems[0]);
                            // or
                            // both are same
             FruitslistBox.Items.RemoveAt(FruitslistBox.SelectedIndex);  // remove from index
        }

        private void button4_Click(object sender, EventArgs e)
        {
            FruitslistBox.Items.Clear();    // Ths will clear whole listbox
        }
    }
}