package Controlador;
import Modelo.*;
import Vista.*;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JOptionPane;
public class botonPares implements ActionListener{
	private PanelPares panel;
	public botonPares(PanelPares panel){
		this.panel = panel;
	}
	public void actionPerformed(ActionEvent ev) {
		  String mensaje = "";
		  try {
			if ( panel.getGui().getApp().par(Integer.parseInt( panel.getText() )) )
			  mensaje = "Si, " + panel.getText() + " es par";
		    else mensaje = "El numero " + panel.getText() + " no es par";
		  } catch (NumberFormatException e) {
			  mensaje = panel.getText() + "No se ha introducido un n�mero entero v�lido";
		  } finally {
			  JOptionPane.showMessageDialog(null, mensaje);
		  }
		}
}
