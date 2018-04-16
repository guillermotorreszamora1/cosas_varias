package Vista;
import Modelo.*;
import Controlador.*;

import javax.swing.*;

import java.awt.*;
import java.awt.event.*;

public class PanelPalindromos extends JPanel {
	private JLabel etiqueta;
	private JTextField campo;
	private JButton boton;
	private GuiSimple gui;
	
	public PanelPalindromos(GuiSimple gui, String etiquetaCampo, String etiquetaBoton) {
		this.gui = gui;
		this.setLayout(new FlowLayout());
		
		this.etiqueta = new JLabel(etiquetaCampo);
		this.campo = new JTextField(10);
		this.boton = new JButton(etiquetaBoton);
		
		// this.setPreferredSize(new Dimension(400, 200));
		
		// asociar acciones a componentes
		boton.addActionListener(new botonPalindromo(this));
		
		// a�adir componentes al panel
		this.add(etiqueta);
		this.add(campo);
		this.add(boton);
	}
	public String getText(){
		return this.campo.getText();
	}

    public GuiSimple getGui(){
    	return gui;
    }
	public void limpiaCampo() { this.campo.setText(""); };
}
