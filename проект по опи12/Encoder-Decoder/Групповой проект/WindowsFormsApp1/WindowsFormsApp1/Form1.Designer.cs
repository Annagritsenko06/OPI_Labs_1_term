﻿
namespace WindowsFormsApp1
{
    partial class Shifr
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Shifr));
            this.choice = new System.Windows.Forms.Label();
            this.Input_label = new System.Windows.Forms.Label();
            this.Shifrator = new System.Windows.Forms.Button();
            this.Deshifrator = new System.Windows.Forms.Button();
            this.Output_label = new System.Windows.Forms.Label();
            this.Input = new System.Windows.Forms.TextBox();
            this.Output = new System.Windows.Forms.TextBox();
            this.Shifr1 = new System.Windows.Forms.RadioButton();
            this.Shifr2 = new System.Windows.Forms.RadioButton();
            this.Shifr3 = new System.Windows.Forms.RadioButton();
            this.Shifr4 = new System.Windows.Forms.RadioButton();
            this.Shifr5 = new System.Windows.Forms.RadioButton();
            this.Clean_input = new System.Windows.Forms.Button();
            this.Clean_output = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // choice
            // 
            this.choice.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.choice.Location = new System.Drawing.Point(441, 14);
            this.choice.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.choice.Name = "choice";
            this.choice.Size = new System.Drawing.Size(436, 62);
            this.choice.TabIndex = 0;
            this.choice.Text = "Выберите шифр";
            // 
            // Input_label
            // 
            this.Input_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Input_label.Location = new System.Drawing.Point(15, 234);
            this.Input_label.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.Input_label.Name = "Input_label";
            this.Input_label.Size = new System.Drawing.Size(390, 62);
            this.Input_label.TabIndex = 1;
            this.Input_label.Text = "Введите текст";
            // 
            // Shifrator
            // 
            this.Shifrator.Enabled = false;
            this.Shifrator.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Shifrator.Location = new System.Drawing.Point(52, 1016);
            this.Shifrator.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Shifrator.Name = "Shifrator";
            this.Shifrator.Size = new System.Drawing.Size(450, 78);
            this.Shifrator.TabIndex = 2;
            this.Shifrator.Text = "Зашифровать";
            this.Shifrator.UseVisualStyleBackColor = true;
            this.Shifrator.Click += new System.EventHandler(this.Shifrator_Click);
            // 
            // Deshifrator
            // 
            this.Deshifrator.Enabled = false;
            this.Deshifrator.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Deshifrator.Location = new System.Drawing.Point(820, 1016);
            this.Deshifrator.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Deshifrator.Name = "Deshifrator";
            this.Deshifrator.Size = new System.Drawing.Size(450, 78);
            this.Deshifrator.TabIndex = 3;
            this.Deshifrator.Text = "Расшифровать";
            this.Deshifrator.UseVisualStyleBackColor = true;
            this.Deshifrator.Click += new System.EventHandler(this.Deshifrator_Click);
            // 
            // Output_label
            // 
            this.Output_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Output_label.Location = new System.Drawing.Point(15, 594);
            this.Output_label.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.Output_label.Name = "Output_label";
            this.Output_label.Size = new System.Drawing.Size(296, 62);
            this.Output_label.TabIndex = 4;
            this.Output_label.Text = "Результат";
            // 
            // Input
            // 
            this.Input.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Input.Location = new System.Drawing.Point(15, 312);
            this.Input.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Input.Multiline = true;
            this.Input.Name = "Input";
            this.Input.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.Input.Size = new System.Drawing.Size(1273, 232);
            this.Input.TabIndex = 5;
            this.Input.TextChanged += new System.EventHandler(this.Input_TextChanged);
            // 
            // Output
            // 
            this.Output.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Output.Location = new System.Drawing.Point(15, 664);
            this.Output.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Output.Multiline = true;
            this.Output.Name = "Output";
            this.Output.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.Output.Size = new System.Drawing.Size(1273, 232);
            this.Output.TabIndex = 6;
            this.Output.TextChanged += new System.EventHandler(this.Output_TextChanged);
            // 
            // Shifr1
            // 
            this.Shifr1.Checked = true;
            this.Shifr1.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Shifr1.Location = new System.Drawing.Point(22, 78);
            this.Shifr1.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Shifr1.Name = "Shifr1";
            this.Shifr1.Size = new System.Drawing.Size(314, 62);
            this.Shifr1.TabIndex = 7;
            this.Shifr1.TabStop = true;
            this.Shifr1.Text = "шифр Атбаш";
            this.Shifr1.UseVisualStyleBackColor = true;
            // 
            // Shifr2
            // 
            this.Shifr2.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Shifr2.Location = new System.Drawing.Point(22, 156);
            this.Shifr2.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Shifr2.Name = "Shifr2";
            this.Shifr2.Size = new System.Drawing.Size(375, 62);
            this.Shifr2.TabIndex = 8;
            this.Shifr2.Text = "шифр XOR";
            this.Shifr2.UseVisualStyleBackColor = true;
            // 
            // Shifr3
            // 
            this.Shifr3.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Shifr3.Location = new System.Drawing.Point(450, 78);
            this.Shifr3.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Shifr3.Name = "Shifr3";
            this.Shifr3.Size = new System.Drawing.Size(747, 62);
            this.Shifr3.TabIndex = 9;
            this.Shifr3.Text = "модифицированная азбука Морзе";
            this.Shifr3.UseVisualStyleBackColor = true;
            // 
            // Shifr4
            // 
            this.Shifr4.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Shifr4.Location = new System.Drawing.Point(450, 156);
            this.Shifr4.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Shifr4.Name = "Shifr4";
            this.Shifr4.Size = new System.Drawing.Size(321, 62);
            this.Shifr4.TabIndex = 10;
            this.Shifr4.Text = "шифр Цезаря";
            this.Shifr4.UseVisualStyleBackColor = true;
            // 
            // Shifr5
            // 
            this.Shifr5.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Shifr5.Location = new System.Drawing.Point(849, 156);
            this.Shifr5.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Shifr5.Name = "Shifr5";
            this.Shifr5.Size = new System.Drawing.Size(380, 62);
            this.Shifr5.TabIndex = 11;
            this.Shifr5.Text = "шифр Полибия";
            this.Shifr5.UseVisualStyleBackColor = true;
            // 
            // Clean_input
            // 
            this.Clean_input.Enabled = false;
            this.Clean_input.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Clean_input.Location = new System.Drawing.Point(1299, 377);
            this.Clean_input.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Clean_input.Name = "Clean_input";
            this.Clean_input.Size = new System.Drawing.Size(170, 114);
            this.Clean_input.TabIndex = 12;
            this.Clean_input.Text = "Очистить поле";
            this.Clean_input.UseVisualStyleBackColor = true;
            this.Clean_input.Click += new System.EventHandler(this.Clean_input_Click);
            // 
            // Clean_output
            // 
            this.Clean_output.Enabled = false;
            this.Clean_output.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Clean_output.Location = new System.Drawing.Point(1299, 728);
            this.Clean_output.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Clean_output.Name = "Clean_output";
            this.Clean_output.Size = new System.Drawing.Size(170, 114);
            this.Clean_output.TabIndex = 13;
            this.Clean_output.Text = "Очистить поле";
            this.Clean_output.UseVisualStyleBackColor = true;
            this.Clean_output.Click += new System.EventHandler(this.Clean_output_Click);
            // 
            // Shifr
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.ClientSize = new System.Drawing.Size(1473, 1177);
            this.Controls.Add(this.Clean_output);
            this.Controls.Add(this.Clean_input);
            this.Controls.Add(this.Shifr5);
            this.Controls.Add(this.Shifr4);
            this.Controls.Add(this.Shifr3);
            this.Controls.Add(this.Shifr2);
            this.Controls.Add(this.Shifr1);
            this.Controls.Add(this.Output);
            this.Controls.Add(this.Input);
            this.Controls.Add(this.Output_label);
            this.Controls.Add(this.Deshifrator);
            this.Controls.Add(this.Shifrator);
            this.Controls.Add(this.Input_label);
            this.Controls.Add(this.choice);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Name = "Shifr";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Incoder/Decoder";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label choice;
        private System.Windows.Forms.Label Input_label;
        private System.Windows.Forms.Button Shifrator;
        private System.Windows.Forms.Button Deshifrator;
        private System.Windows.Forms.Label Output_label;
        private System.Windows.Forms.TextBox Input;
        private System.Windows.Forms.TextBox Output;
        private System.Windows.Forms.RadioButton Shifr1;
        private System.Windows.Forms.RadioButton Shifr2;
        private System.Windows.Forms.RadioButton Shifr3;
        private System.Windows.Forms.RadioButton Shifr4;
        private System.Windows.Forms.RadioButton Shifr5;
        private System.Windows.Forms.Button Clean_input;
        private System.Windows.Forms.Button Clean_output;
    }
}

