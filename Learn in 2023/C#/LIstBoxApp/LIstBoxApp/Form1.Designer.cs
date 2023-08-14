namespace LIstBoxApp
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.FruitslistBox = new System.Windows.Forms.ListBox();
            this.label1 = new System.Windows.Forms.Label();
            this.addItem = new System.Windows.Forms.TextBox();
            this.add = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // FruitslistBox
            // 
            this.FruitslistBox.BackColor = System.Drawing.Color.RosyBrown;
            this.FruitslistBox.FormattingEnabled = true;
            this.FruitslistBox.ItemHeight = 20;
            this.FruitslistBox.Items.AddRange(new object[] {
            "Mango",
            "Banana",
            "Orange",
            "WaterMelon",
            "Stowberry"});
            this.FruitslistBox.Location = new System.Drawing.Point(40, 37);
            this.FruitslistBox.Margin = new System.Windows.Forms.Padding(14);
            this.FruitslistBox.Name = "FruitslistBox";
            this.FruitslistBox.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;
            this.FruitslistBox.Size = new System.Drawing.Size(234, 304);
            this.FruitslistBox.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Segoe UI", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label1.Location = new System.Drawing.Point(294, 63);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(169, 32);
            this.label1.TabIndex = 1;
            this.label1.Text = "ADD ITEMS :-";
            // 
            // addItem
            // 
            this.addItem.Font = new System.Drawing.Font("Segoe UI", 13F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.addItem.Location = new System.Drawing.Point(451, 59);
            this.addItem.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.addItem.Multiline = true;
            this.addItem.Name = "addItem";
            this.addItem.Size = new System.Drawing.Size(244, 44);
            this.addItem.TabIndex = 2;
            // 
            // add
            // 
            this.add.Font = new System.Drawing.Font("Tahoma", 11.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point);
            this.add.Location = new System.Drawing.Point(294, 143);
            this.add.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.add.Name = "add";
            this.add.Size = new System.Drawing.Size(200, 56);
            this.add.TabIndex = 3;
            this.add.Text = "ADD";
            this.add.UseVisualStyleBackColor = true;
            this.add.Click += new System.EventHandler(this.add_Click);
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("Tahoma", 11.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point);
            this.button1.Location = new System.Drawing.Point(513, 143);
            this.button1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(200, 56);
            this.button1.TabIndex = 4;
            this.button1.Text = "COUNT ITEMS";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Font = new System.Drawing.Font("Tahoma", 11.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point);
            this.button2.Location = new System.Drawing.Point(294, 219);
            this.button2.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(200, 56);
            this.button2.TabIndex = 5;
            this.button2.Text = "SORT ITEMS";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button3
            // 
            this.button3.Font = new System.Drawing.Font("Tahoma", 11.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point);
            this.button3.Location = new System.Drawing.Point(513, 219);
            this.button3.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(200, 56);
            this.button3.TabIndex = 6;
            this.button3.Text = "REMOVE";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button4
            // 
            this.button4.Font = new System.Drawing.Font("Tahoma", 11.25F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point);
            this.button4.Location = new System.Drawing.Point(406, 303);
            this.button4.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(200, 56);
            this.button4.TabIndex = 7;
            this.button4.Text = "REMOVE ALL";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlDark;
            this.ClientSize = new System.Drawing.Size(806, 451);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.add);
            this.Controls.Add(this.addItem);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.FruitslistBox);
            this.ForeColor = System.Drawing.SystemColors.ControlText;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "LISTBOX APP";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private ListBox FruitslistBox;
        private Label label1;
        private TextBox addItem;
        private Button add;
        private Button button1;
        private Button button2;
        private Button button3;
        private Button button4;
    }
}