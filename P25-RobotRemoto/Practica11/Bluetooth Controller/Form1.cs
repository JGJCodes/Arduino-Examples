using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO.Ports;
using Bluetooth_Controller.Properties;

namespace Bluetooth_Controller
{
    public partial class BLUETOOTH_CONTROLLER : Form
    {



        public BLUETOOTH_CONTROLLER()
        {
            InitializeComponent();
            //serialPort1.PortName = "COM4";
            //serialPort1.BaudRate = 9600;
            //serialPort1.Open();


        }

        private void button1_Click(object sender, EventArgs e)
        {

            serialPort1.PortName = textBoxcom.Text;
            serialPort1.BaudRate = Convert.ToInt32(txtbaudrate.Text);
            serialPort1.Open();
        }


        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (serialPort1.IsOpen) serialPort1.Close();

        }


        private void btn1_Click(object sender, EventArgs e)
        {
            serialPort1.Write("x");
            btn1.Enabled = false;
            btn3.Enabled = true;
            pic1.Image = Resources.ledon;
        }

        private void btn3_Click(object sender, EventArgs e)
        {
            serialPort1.Write("y");
            btn1.Enabled = true;
            btn3.Enabled = false;
            pic1.Image = Resources.offled;
        }

        private void btn2_Click(object sender, EventArgs e)
        {
            serialPort1.Write("w");
            btn4.Enabled = true;
            btn2.Enabled = false;
            pic2.Image = Resources.ledon;
        }


        private void btn4_Click(object sender, EventArgs e)
        {
            serialPort1.Write("z");
            btn2.Enabled = true;
            btn4.Enabled = false;
            pic2.Image = Resources.offled;
        }

        private void btndesconectar_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen) serialPort1.Close();
        }

        private void btnup_Click(object sender, EventArgs e)
        {
            serialPort1.Write("f");
        }

        private void btnrigth_Click(object sender, EventArgs e)
        {
            serialPort1.Write("r");
        }

        private void btndown_Click(object sender, EventArgs e)
        {
            serialPort1.Write("b");
        }

        private void btnleft_Click(object sender, EventArgs e)
        {
            serialPort1.Write("l");
        }

        private void btnstop_Click(object sender, EventArgs e)
        {
            serialPort1.Write("s");
        }

        private void btngo_Click(object sender, EventArgs e)
        {
            serialPort1.Write("q");
        }

        private void btnstop2_Click(object sender, EventArgs e)
        {
            serialPort1.Write("e");
        }



        



        





    }
}
