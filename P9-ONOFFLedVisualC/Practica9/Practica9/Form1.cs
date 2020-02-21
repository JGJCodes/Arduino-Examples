using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Practica9
{
    public partial class Form1 : Form
    {
        int bandera = 0;
        byte[] dato = new byte[2];
        public Form1()
        {
            dato[0] = 0;
            dato[1] = 1;
            InitializeComponent();
            rs232.Open();
        }

        private void label1_Click(object sender, EventArgs e)
        {
           
       

        }

        private void button1_Click(object sender, EventArgs e)
        {

            if (bandera == 0)
            {
                rs232.Write(dato, 1, 1);
                boton1.Text = "OFF";
                bandera = 1;
            }
            else
            {
                rs232.Write(dato, 0, 1);
                boton1.Text = "ON";
                bandera = 0;
            }

        }
    }
}
