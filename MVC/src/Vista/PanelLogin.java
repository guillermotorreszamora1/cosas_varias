package Vista;
import Modelo.*;
import Controlador.*;

import javax.swing.*;
import javax.swing.event.*;

import java.awt.*;

public class PanelLogin extends JPanel {
	private JLabel etiquetaUsuario = new JLabel("Usuario:");
	private JLabel etiquetaContrasena = new JLabel("Clave secreta");
	private JTextField campoUsuario = new JTextField(20);
	private JTextField campoContrasena = new JTextField(20);
	private JButton botonLogin = new JButton("Entrar");
	private GuiSimple gui;
	private Aplicacion app;
	public PanelLogin(GuiSimple gui,Aplicacion app) {	
		this.gui = gui;
		this.app = app;
		this.setLayout(new BorderLayout());
		JPanel pn = new JPanel(new GridLayout(2,2));
		pn.add(etiquetaUsuario); 
		pn.add(campoUsuario);
		pn.add(etiquetaContrasena);
		pn.add(campoContrasena);
		this.add(pn, BorderLayout.CENTER);
		
		JPanel pb = new JPanel();
		pb.add(botonLogin);
		this.add(pb, BorderLayout.SOUTH);
		
		botonLogin.addActionListener(new boton1action(app,this ));
	}
	public String getUsuario(){
		return campoUsuario.getText();
	}
	public String getContrasena(){
		return campoContrasena.getText();
	}
	public GuiSimple getGui(){
		return gui;
	}
}
