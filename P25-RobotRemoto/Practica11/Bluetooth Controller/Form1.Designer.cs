namespace Bluetooth_Controller
{
    partial class BLUETOOTH_CONTROLLER
    {
        /// <summary>
        /// Variable del diseñador requerida.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpiar los recursos que se estén utilizando.
        /// </summary>
        /// <param name="disposing">true si los recursos administrados se deben eliminar; false en caso contrario, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código generado por el Diseñador de Windows Forms

        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido del método con el editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.label1 = new System.Windows.Forms.Label();
            this.serialPort1 = new System.IO.Ports.SerialPort(this.components);
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.linkLabel1 = new System.Windows.Forms.LinkLabel();
            this.label4 = new System.Windows.Forms.Label();
            this.textBoxcom = new System.Windows.Forms.TextBox();
            this.btnconectar = new System.Windows.Forms.Button();
            this.btndesconectar = new System.Windows.Forms.Button();
            this.txtbaudrate = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.pic2 = new System.Windows.Forms.PictureBox();
            this.pic1 = new System.Windows.Forms.PictureBox();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.btnstop2 = new System.Windows.Forms.Button();
            this.btngo = new System.Windows.Forms.Button();
            this.btn3 = new System.Windows.Forms.Button();
            this.btn2 = new System.Windows.Forms.Button();
            this.btn1 = new System.Windows.Forms.Button();
            this.btn4 = new System.Windows.Forms.Button();
            this.btnrigth = new System.Windows.Forms.Button();
            this.btnstop = new System.Windows.Forms.Button();
            this.btnleft = new System.Windows.Forms.Button();
            this.btndown = new System.Windows.Forms.Button();
            this.btnup = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pic2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pic1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("AR DESTINE", 26.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(65, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(353, 41);
            this.label1.TabIndex = 9;
            this.label1.Text = "Bluetooth Controller";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(56, 328);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(67, 13);
            this.label2.TabIndex = 11;
            this.label2.Text = "Puerto Serial";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("AR DESTINE", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(6, 305);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(47, 23);
            this.label3.TabIndex = 14;
            this.label3.Text = "COM";
            // 
            // linkLabel1
            // 
            this.linkLabel1.AutoSize = true;
            this.linkLabel1.Location = new System.Drawing.Point(146, 442);
            this.linkLabel1.Name = "linkLabel1";
            this.linkLabel1.Size = new System.Drawing.Size(176, 13);
            this.linkLabel1.TabIndex = 16;
            this.linkLabel1.TabStop = true;
            this.linkLabel1.Text = "http://electrongeeks.blogspot.com/";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(149, 328);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(55, 13);
            this.label4.TabIndex = 18;
            this.label4.Text = "BaudRate";
            // 
            // textBoxcom
            // 
            this.textBoxcom.Location = new System.Drawing.Point(59, 305);
            this.textBoxcom.Name = "textBoxcom";
            this.textBoxcom.Size = new System.Drawing.Size(85, 20);
            this.textBoxcom.TabIndex = 22;
            this.textBoxcom.Text = "COM1";
            // 
            // btnconectar
            // 
            this.btnconectar.Location = new System.Drawing.Point(59, 368);
            this.btnconectar.Name = "btnconectar";
            this.btnconectar.Size = new System.Drawing.Size(75, 23);
            this.btnconectar.TabIndex = 24;
            this.btnconectar.Text = "CONECTAR";
            this.btnconectar.UseVisualStyleBackColor = true;
            this.btnconectar.Click += new System.EventHandler(this.button1_Click);
            // 
            // btndesconectar
            // 
            this.btndesconectar.Location = new System.Drawing.Point(152, 368);
            this.btndesconectar.Name = "btndesconectar";
            this.btndesconectar.Size = new System.Drawing.Size(100, 23);
            this.btndesconectar.TabIndex = 26;
            this.btndesconectar.Text = "DESCONECTAR";
            this.btndesconectar.UseVisualStyleBackColor = true;
            this.btndesconectar.Click += new System.EventHandler(this.btndesconectar_Click);
            // 
            // txtbaudrate
            // 
            this.txtbaudrate.Location = new System.Drawing.Point(152, 305);
            this.txtbaudrate.Name = "txtbaudrate";
            this.txtbaudrate.Size = new System.Drawing.Size(100, 20);
            this.txtbaudrate.TabIndex = 27;
            this.txtbaudrate.Text = "9600";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("AR DESTINE", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(139, 416);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(189, 16);
            this.label5.TabIndex = 28;
            this.label5.Text = "CREATED BY ELECTRO_GEEKS";
            // 
            // pic2
            // 
            this.pic2.Image = global::Bluetooth_Controller.Properties.Resources.offled;
            this.pic2.Location = new System.Drawing.Point(431, 92);
            this.pic2.Name = "pic2";
            this.pic2.Size = new System.Drawing.Size(50, 50);
            this.pic2.TabIndex = 30;
            this.pic2.TabStop = false;
            // 
            // pic1
            // 
            this.pic1.Image = global::Bluetooth_Controller.Properties.Resources.offled;
            this.pic1.Location = new System.Drawing.Point(252, 92);
            this.pic1.Name = "pic1";
            this.pic1.Size = new System.Drawing.Size(50, 50);
            this.pic1.TabIndex = 29;
            this.pic1.TabStop = false;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::Bluetooth_Controller.Properties.Resources.wolf_neon;
            this.pictureBox1.Location = new System.Drawing.Point(288, 265);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(152, 137);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox1.TabIndex = 15;
            this.pictureBox1.TabStop = false;
            // 
            // btnstop2
            // 
            this.btnstop2.Image = global::Bluetooth_Controller.Properties.Resources.stp;
            this.btnstop2.Location = new System.Drawing.Point(373, 179);
            this.btnstop2.Name = "btnstop2";
            this.btnstop2.Size = new System.Drawing.Size(70, 70);
            this.btnstop2.TabIndex = 13;
            this.btnstop2.UseVisualStyleBackColor = true;
            this.btnstop2.Click += new System.EventHandler(this.btnstop2_Click);
            // 
            // btngo
            // 
            this.btngo.Image = global::Bluetooth_Controller.Properties.Resources.go;
            this.btngo.Location = new System.Drawing.Point(288, 179);
            this.btngo.Name = "btngo";
            this.btngo.Size = new System.Drawing.Size(70, 70);
            this.btngo.TabIndex = 12;
            this.btngo.UseVisualStyleBackColor = true;
            this.btngo.Click += new System.EventHandler(this.btngo_Click);
            // 
            // btn3
            // 
            this.btn3.Image = global::Bluetooth_Controller.Properties.Resources.on__2_;
            this.btn3.Location = new System.Drawing.Point(308, 120);
            this.btn3.Name = "btn3";
            this.btn3.Size = new System.Drawing.Size(50, 50);
            this.btn3.TabIndex = 8;
            this.btn3.UseVisualStyleBackColor = true;
            this.btn3.Click += new System.EventHandler(this.btn3_Click);
            // 
            // btn2
            // 
            this.btn2.Image = global::Bluetooth_Controller.Properties.Resources.off;
            this.btn2.Location = new System.Drawing.Point(375, 64);
            this.btn2.Name = "btn2";
            this.btn2.Size = new System.Drawing.Size(50, 50);
            this.btn2.TabIndex = 7;
            this.btn2.UseVisualStyleBackColor = true;
            this.btn2.Click += new System.EventHandler(this.btn2_Click);
            // 
            // btn1
            // 
            this.btn1.Image = global::Bluetooth_Controller.Properties.Resources.off;
            this.btn1.Location = new System.Drawing.Point(308, 64);
            this.btn1.Name = "btn1";
            this.btn1.Size = new System.Drawing.Size(50, 50);
            this.btn1.TabIndex = 6;
            this.btn1.UseVisualStyleBackColor = true;
            this.btn1.Click += new System.EventHandler(this.btn1_Click);
            // 
            // btn4
            // 
            this.btn4.Image = global::Bluetooth_Controller.Properties.Resources.on__2_;
            this.btn4.Location = new System.Drawing.Point(375, 120);
            this.btn4.Name = "btn4";
            this.btn4.Size = new System.Drawing.Size(50, 50);
            this.btn4.TabIndex = 5;
            this.btn4.UseVisualStyleBackColor = true;
            this.btn4.Click += new System.EventHandler(this.btn4_Click);
            // 
            // btnrigth
            // 
            this.btnrigth.Image = global::Bluetooth_Controller.Properties.Resources.rigth;
            this.btnrigth.Location = new System.Drawing.Point(160, 137);
            this.btnrigth.Name = "btnrigth";
            this.btnrigth.Size = new System.Drawing.Size(70, 70);
            this.btnrigth.TabIndex = 4;
            this.btnrigth.UseVisualStyleBackColor = true;
            this.btnrigth.Click += new System.EventHandler(this.btnrigth_Click);
            // 
            // btnstop
            // 
            this.btnstop.Image = global::Bluetooth_Controller.Properties.Resources.stop;
            this.btnstop.Location = new System.Drawing.Point(84, 137);
            this.btnstop.Name = "btnstop";
            this.btnstop.Size = new System.Drawing.Size(70, 70);
            this.btnstop.TabIndex = 3;
            this.btnstop.UseVisualStyleBackColor = true;
            this.btnstop.Click += new System.EventHandler(this.btnstop_Click);
            // 
            // btnleft
            // 
            this.btnleft.Image = global::Bluetooth_Controller.Properties.Resources.left;
            this.btnleft.Location = new System.Drawing.Point(8, 137);
            this.btnleft.Name = "btnleft";
            this.btnleft.Size = new System.Drawing.Size(70, 70);
            this.btnleft.TabIndex = 2;
            this.btnleft.UseVisualStyleBackColor = true;
            this.btnleft.Click += new System.EventHandler(this.btnleft_Click);
            // 
            // btndown
            // 
            this.btndown.Image = global::Bluetooth_Controller.Properties.Resources.down;
            this.btndown.Location = new System.Drawing.Point(84, 213);
            this.btndown.Name = "btndown";
            this.btndown.Size = new System.Drawing.Size(70, 70);
            this.btndown.TabIndex = 1;
            this.btndown.UseVisualStyleBackColor = true;
            this.btndown.Click += new System.EventHandler(this.btndown_Click);
            // 
            // btnup
            // 
            this.btnup.Image = global::Bluetooth_Controller.Properties.Resources.up;
            this.btnup.Location = new System.Drawing.Point(84, 61);
            this.btnup.Name = "btnup";
            this.btnup.Size = new System.Drawing.Size(70, 70);
            this.btnup.TabIndex = 0;
            this.btnup.UseVisualStyleBackColor = true;
            this.btnup.Click += new System.EventHandler(this.btnup_Click);
            // 
            // BLUETOOTH_CONTROLLER
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoValidate = System.Windows.Forms.AutoValidate.EnablePreventFocusChange;
            this.ClientSize = new System.Drawing.Size(494, 464);
            this.Controls.Add(this.pic2);
            this.Controls.Add(this.pic1);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.txtbaudrate);
            this.Controls.Add(this.btndesconectar);
            this.Controls.Add(this.btnconectar);
            this.Controls.Add(this.textBoxcom);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.linkLabel1);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.btnstop2);
            this.Controls.Add(this.btngo);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btn3);
            this.Controls.Add(this.btn2);
            this.Controls.Add(this.btn1);
            this.Controls.Add(this.btn4);
            this.Controls.Add(this.btnrigth);
            this.Controls.Add(this.btnstop);
            this.Controls.Add(this.btnleft);
            this.Controls.Add(this.btndown);
            this.Controls.Add(this.btnup);
            this.Name = "BLUETOOTH_CONTROLLER";
            this.Text = "BLUETOOTH_CONTROLLER";
            ((System.ComponentModel.ISupportInitialize)(this.pic2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pic1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnup;
        private System.Windows.Forms.Button btndown;
        private System.Windows.Forms.Button btnleft;
        private System.Windows.Forms.Button btnstop;
        private System.Windows.Forms.Button btnrigth;
        private System.Windows.Forms.Button btn4;
        private System.Windows.Forms.Button btn1;
        private System.Windows.Forms.Button btn2;
        private System.Windows.Forms.Button btn3;
        private System.Windows.Forms.Label label1;
        private System.IO.Ports.SerialPort serialPort1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button btngo;
        private System.Windows.Forms.Button btnstop2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.LinkLabel linkLabel1;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox textBoxcom;
        private System.Windows.Forms.Button btnconectar;
        private System.Windows.Forms.Button btndesconectar;
        private System.Windows.Forms.TextBox txtbaudrate;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.PictureBox pic1;
        private System.Windows.Forms.PictureBox pic2;
    }
}

