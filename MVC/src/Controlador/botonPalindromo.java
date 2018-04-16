package Controlador;
import Modelo.*;
import Vista.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JOptionPane;


public class botonPalindromo implements ActionListener{
	private PanelPalindromos panel;
	public botonPalindromo(PanelPalindromos panel){
		this.panel = panel;
	}
	public void actionPerformed(ActionEvent ev){
		String mensaje;

		if ( 
				this.panel.getGui().getApp().pal(
						this.panel.getText()) ){
		           mensaje = "Yes, " + this.panel.getText() + " es pal�ndromo";
		}else{
			mensaje = "No es palidromo. Try again ...";
		}
		JOptionPane.showMessageDialog(null, mensaje);
	}
}
