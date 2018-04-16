package Vista;
import Modelo.*;
import Controlador.*;
import javax.swing.*;

import java.awt.*;
import java.awt.event.*;

public class PanelPares extends JPanel{
	private JLabel etiqueta;
	private JTextField campo;
	private JButton boton;
	private GuiSimple gui;
	
	public PanelPares(GuiSimple gui, String etiquetaCampo, String etiquetaBoton) {
		this.gui = gui;	
		this.etiqueta = new JLabel(etiquetaCampo);
		this.campo = new JTextField(10);
		this.boton = new JButton(etiquetaBoton);
		
		// asociar acciones a componentes
		boton.addActionListener(new botonPares(this));
		
		// asignar Layout Manager y a�adir componentes 
		this.setLayout(new BorderLayout() );
		this.add(etiqueta, BorderLayout.WEST);
		this.add(campo, BorderLayout.CENTER);
		this.add(boton, BorderLayout.SOUTH);	
	}
	public String getText(){
		return campo.getText();
	}
    public GuiSimple getGui(){
    	return gui;
    }
	public void limpiaCampo() { this.campo.setText(""); }

}
