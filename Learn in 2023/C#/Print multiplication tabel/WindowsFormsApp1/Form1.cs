﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            int i, num;
            num = Convert.ToInt16(numericUpDown1.Value);
            listBox1.Items.Clear();
            for(i=1; i<=10; i++)
            {
                listBox1.Items.Add(num + " * " + i + " = " + num * i);
            }
        }
    }
}
