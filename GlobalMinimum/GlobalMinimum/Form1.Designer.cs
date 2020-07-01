namespace GlobalMinimum
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea4 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Series series4 = new System.Windows.Forms.DataVisualization.Charting.Series();
            this.radioButton1 = new System.Windows.Forms.RadioButton();
            this.radioButton2 = new System.Windows.Forms.RadioButton();
            this.radioButton3 = new System.Windows.Forms.RadioButton();
            this.button1 = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.chart1 = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.textBox3 = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.textBox4 = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.textBox5 = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.textBox6 = new System.Windows.Forms.TextBox();
            this.label8 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.label10 = new System.Windows.Forms.Label();
            this.label11 = new System.Windows.Forms.Label();
            this.textBox7 = new System.Windows.Forms.TextBox();
            this.textBox8 = new System.Windows.Forms.TextBox();
            this.textBox9 = new System.Windows.Forms.TextBox();
            this.textBox10 = new System.Windows.Forms.TextBox();
            this.label12 = new System.Windows.Forms.Label();
            this.textBox11 = new System.Windows.Forms.TextBox();
            this.label13 = new System.Windows.Forms.Label();
            this.textBox12 = new System.Windows.Forms.TextBox();
            this.label14 = new System.Windows.Forms.Label();
            this.textBox13 = new System.Windows.Forms.TextBox();
            this.radioButton4 = new System.Windows.Forms.RadioButton();
            this.radioButton5 = new System.Windows.Forms.RadioButton();
            this.panel1 = new System.Windows.Forms.Panel();
            this.label15 = new System.Windows.Forms.Label();
            this.radioButton6 = new System.Windows.Forms.RadioButton();
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).BeginInit();
            this.panel1.SuspendLayout();
            this.SuspendLayout();
            // 
            // radioButton1
            // 
            this.radioButton1.AutoSize = true;
            this.radioButton1.Checked = true;
            this.radioButton1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.radioButton1.Location = new System.Drawing.Point(3, 8);
            this.radioButton1.Name = "radioButton1";
            this.radioButton1.Size = new System.Drawing.Size(190, 28);
            this.radioButton1.TabIndex = 1;
            this.radioButton1.TabStop = true;
            this.radioButton1.Text = "Метод Стронгина";
            this.radioButton1.UseVisualStyleBackColor = true;
            // 
            // radioButton2
            // 
            this.radioButton2.AutoSize = true;
            this.radioButton2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.radioButton2.Location = new System.Drawing.Point(3, 40);
            this.radioButton2.Name = "radioButton2";
            this.radioButton2.Size = new System.Drawing.Size(188, 28);
            this.radioButton2.TabIndex = 2;
            this.radioButton2.Text = "Метод Пиявского";
            this.radioButton2.UseVisualStyleBackColor = true;
            // 
            // radioButton3
            // 
            this.radioButton3.AutoSize = true;
            this.radioButton3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.radioButton3.Location = new System.Drawing.Point(3, 72);
            this.radioButton3.Name = "radioButton3";
            this.radioButton3.Size = new System.Drawing.Size(107, 28);
            this.radioButton3.TabIndex = 3;
            this.radioButton3.Text = "Перебор";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(12, 432);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(250, 63);
            this.button1.TabIndex = 4;
            this.button1.Text = "Вычислить";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.Button1_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label1.Location = new System.Drawing.Point(12, 20);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(65, 24);
            this.label1.TabIndex = 12;
            this.label1.Text = "F(x) = ";
            // 
            // chart1
            // 
            this.chart1.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            chartArea4.Name = "ChartArea1";
            this.chart1.ChartAreas.Add(chartArea4);
            this.chart1.Location = new System.Drawing.Point(436, 12);
            this.chart1.Name = "chart1";
            series4.ChartArea = "ChartArea1";
            series4.Name = "Series1";
            this.chart1.Series.Add(series4);
            this.chart1.Size = new System.Drawing.Size(571, 483);
            this.chart1.TabIndex = 20;
            this.chart1.Text = "chart1";
            // 
            // textBox1
            // 
            this.textBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox1.Location = new System.Drawing.Point(78, 17);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(43, 29);
            this.textBox1.TabIndex = 21;
            this.textBox1.Text = "1";
            // 
            // textBox2
            // 
            this.textBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox2.Location = new System.Drawing.Point(69, 55);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(58, 29);
            this.textBox2.TabIndex = 23;
            this.textBox2.Text = "-5";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label2.Location = new System.Drawing.Point(12, 55);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(46, 24);
            this.label2.TabIndex = 22;
            this.label2.Text = "x ∈ [";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label3.Location = new System.Drawing.Point(133, 58);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(15, 24);
            this.label3.TabIndex = 24;
            this.label3.Text = ",";
            // 
            // textBox3
            // 
            this.textBox3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox3.Location = new System.Drawing.Point(154, 55);
            this.textBox3.Name = "textBox3";
            this.textBox3.Size = new System.Drawing.Size(58, 29);
            this.textBox3.TabIndex = 25;
            this.textBox3.Text = "5";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label4.Location = new System.Drawing.Point(218, 55);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(15, 24);
            this.label4.TabIndex = 26;
            this.label4.Text = "]";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label5.Location = new System.Drawing.Point(12, 92);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(96, 24);
            this.label5.TabIndex = 27;
            this.label5.Text = "Точность";
            // 
            // textBox4
            // 
            this.textBox4.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox4.Location = new System.Drawing.Point(175, 89);
            this.textBox4.Name = "textBox4";
            this.textBox4.Size = new System.Drawing.Size(58, 29);
            this.textBox4.TabIndex = 28;
            this.textBox4.Text = "0,01";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label6.Location = new System.Drawing.Point(12, 127);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(16, 24);
            this.label6.TabIndex = 29;
            this.label6.Text = "r";
            // 
            // textBox5
            // 
            this.textBox5.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox5.Location = new System.Drawing.Point(175, 124);
            this.textBox5.Name = "textBox5";
            this.textBox5.Size = new System.Drawing.Size(58, 29);
            this.textBox5.TabIndex = 30;
            this.textBox5.Text = "2";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label7.Location = new System.Drawing.Point(12, 162);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(154, 24);
            this.label7.TabIndex = 31;
            this.label7.Text = "Число итераций";
            // 
            // textBox6
            // 
            this.textBox6.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox6.Location = new System.Drawing.Point(175, 162);
            this.textBox6.Name = "textBox6";
            this.textBox6.Size = new System.Drawing.Size(58, 29);
            this.textBox6.TabIndex = 32;
            this.textBox6.Text = "1000";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label8.Location = new System.Drawing.Point(256, 278);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(116, 24);
            this.label8.TabIndex = 33;
            this.label8.Text = "Результаты";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label9.Location = new System.Drawing.Point(12, 319);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(94, 24);
            this.label9.TabIndex = 34;
            this.label9.Text = "Минимум";
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label10.Location = new System.Drawing.Point(12, 352);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(160, 24);
            this.label10.TabIndex = 35;
            this.label10.Text = "Координата (x,y)";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label11.Location = new System.Drawing.Point(12, 387);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(179, 24);
            this.label11.TabIndex = 36;
            this.label11.Text = "Сделано итераций";
            // 
            // textBox7
            // 
            this.textBox7.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox7.Location = new System.Drawing.Point(222, 319);
            this.textBox7.Name = "textBox7";
            this.textBox7.Size = new System.Drawing.Size(205, 29);
            this.textBox7.TabIndex = 37;
            // 
            // textBox8
            // 
            this.textBox8.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox8.Location = new System.Drawing.Point(222, 352);
            this.textBox8.Name = "textBox8";
            this.textBox8.Size = new System.Drawing.Size(98, 29);
            this.textBox8.TabIndex = 38;
            // 
            // textBox9
            // 
            this.textBox9.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox9.Location = new System.Drawing.Point(222, 387);
            this.textBox9.Name = "textBox9";
            this.textBox9.Size = new System.Drawing.Size(205, 29);
            this.textBox9.TabIndex = 39;
            // 
            // textBox10
            // 
            this.textBox10.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox10.Location = new System.Drawing.Point(326, 352);
            this.textBox10.Name = "textBox10";
            this.textBox10.Size = new System.Drawing.Size(101, 29);
            this.textBox10.TabIndex = 40;
            // 
            // label12
            // 
            this.label12.AutoSize = true;
            this.label12.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label12.Location = new System.Drawing.Point(123, 20);
            this.label12.Name = "label12";
            this.label12.Size = new System.Drawing.Size(40, 24);
            this.label12.TabIndex = 41;
            this.label12.Text = "sin(";
            // 
            // textBox11
            // 
            this.textBox11.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox11.Location = new System.Drawing.Point(163, 17);
            this.textBox11.Name = "textBox11";
            this.textBox11.Size = new System.Drawing.Size(43, 29);
            this.textBox11.TabIndex = 42;
            this.textBox11.Text = "1";
            // 
            // label13
            // 
            this.label13.AutoSize = true;
            this.label13.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label13.Location = new System.Drawing.Point(212, 20);
            this.label13.Name = "label13";
            this.label13.Size = new System.Drawing.Size(42, 24);
            this.label13.TabIndex = 43;
            this.label13.Text = "x) +";
            // 
            // textBox12
            // 
            this.textBox12.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox12.Location = new System.Drawing.Point(260, 17);
            this.textBox12.Name = "textBox12";
            this.textBox12.Size = new System.Drawing.Size(43, 29);
            this.textBox12.TabIndex = 44;
            this.textBox12.Text = "1";
            // 
            // label14
            // 
            this.label14.AutoSize = true;
            this.label14.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label14.Location = new System.Drawing.Point(309, 20);
            this.label14.Name = "label14";
            this.label14.Size = new System.Drawing.Size(46, 24);
            this.label14.TabIndex = 45;
            this.label14.Text = "cos(";
            // 
            // textBox13
            // 
            this.textBox13.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.textBox13.Location = new System.Drawing.Point(357, 17);
            this.textBox13.Name = "textBox13";
            this.textBox13.Size = new System.Drawing.Size(43, 29);
            this.textBox13.TabIndex = 46;
            this.textBox13.Text = "1";
            // 
            // radioButton4
            // 
            this.radioButton4.AutoSize = true;
            this.radioButton4.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.radioButton4.Location = new System.Drawing.Point(243, 197);
            this.radioButton4.Name = "radioButton4";
            this.radioButton4.Size = new System.Drawing.Size(157, 28);
            this.radioButton4.TabIndex = 47;
            this.radioButton4.Text = "Под графиком";
            this.radioButton4.UseVisualStyleBackColor = true;
            // 
            // radioButton5
            // 
            this.radioButton5.AutoSize = true;
            this.radioButton5.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.radioButton5.Location = new System.Drawing.Point(243, 231);
            this.radioButton5.Name = "radioButton5";
            this.radioButton5.Size = new System.Drawing.Size(131, 28);
            this.radioButton5.TabIndex = 48;
            this.radioButton5.Text = "На графике";
            this.radioButton5.UseVisualStyleBackColor = true;
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.radioButton1);
            this.panel1.Controls.Add(this.radioButton3);
            this.panel1.Controls.Add(this.radioButton2);
            this.panel1.Location = new System.Drawing.Point(16, 197);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(200, 105);
            this.panel1.TabIndex = 49;
            // 
            // label15
            // 
            this.label15.AutoSize = true;
            this.label15.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label15.Location = new System.Drawing.Point(243, 136);
            this.label15.Name = "label15";
            this.label15.Size = new System.Drawing.Size(157, 24);
            this.label15.TabIndex = 50;
            this.label15.Text = "Рисвоать точки:";
            // 
            // radioButton6
            // 
            this.radioButton6.AutoSize = true;
            this.radioButton6.Checked = true;
            this.radioButton6.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.radioButton6.Location = new System.Drawing.Point(243, 163);
            this.radioButton6.Name = "radioButton6";
            this.radioButton6.Size = new System.Drawing.Size(142, 28);
            this.radioButton6.TabIndex = 51;
            this.radioButton6.TabStop = true;
            this.radioButton6.Text = "Не рисовать";
            this.radioButton6.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1019, 505);
            this.Controls.Add(this.radioButton6);
            this.Controls.Add(this.label15);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.radioButton5);
            this.Controls.Add(this.radioButton4);
            this.Controls.Add(this.textBox13);
            this.Controls.Add(this.label14);
            this.Controls.Add(this.textBox12);
            this.Controls.Add(this.label13);
            this.Controls.Add(this.textBox11);
            this.Controls.Add(this.label12);
            this.Controls.Add(this.textBox10);
            this.Controls.Add(this.textBox9);
            this.Controls.Add(this.textBox8);
            this.Controls.Add(this.textBox7);
            this.Controls.Add(this.label11);
            this.Controls.Add(this.label10);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.textBox6);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.textBox5);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.textBox4);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.textBox3);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.chart1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.button1);
            this.MinimumSize = new System.Drawing.Size(1035, 544);
            this.Name = "Form1";
            this.Text = "GlobalMinimum";
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).EndInit();
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.RadioButton radioButton1;
        private System.Windows.Forms.RadioButton radioButton2;
        private System.Windows.Forms.RadioButton radioButton3;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.DataVisualization.Charting.Chart chart1;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox textBox3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox textBox4;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox textBox5;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.TextBox textBox6;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.TextBox textBox7;
        private System.Windows.Forms.TextBox textBox8;
        private System.Windows.Forms.TextBox textBox9;
        private System.Windows.Forms.TextBox textBox10;
        private System.Windows.Forms.Label label12;
        private System.Windows.Forms.TextBox textBox11;
        private System.Windows.Forms.Label label13;
        private System.Windows.Forms.TextBox textBox12;
        private System.Windows.Forms.Label label14;
        private System.Windows.Forms.TextBox textBox13;
        private System.Windows.Forms.RadioButton radioButton4;
        private System.Windows.Forms.RadioButton radioButton5;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label label15;
        private System.Windows.Forms.RadioButton radioButton6;
    }
}

