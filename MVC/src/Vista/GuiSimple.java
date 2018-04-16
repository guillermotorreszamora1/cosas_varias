package Vista;
import Modelo.*;
import Controlador.*;

import javax.swing.*;
import javax.swing.event.*;



import java.awt.*;

public class GuiSimple extends JFrame {
	private Aplicacion app;
	private PanelLogin panelLogin;
	private JTabbedPane pestanas = new JTabbedPane();
	private PanelPalindromos panelPalindromos;
	private PanelPares panelPares;
	public GuiSimple(String titulo,Aplicacion app){
		super(titulo);
		this.app = app;
		Container contenedor = this.getContentPane(); // antes: ventana.getContentPane();
		contenedor.setLayout(new FlowLayout());
		
		
		panelLogin = new PanelLogin(this,app);
		contenedor.add(panelLogin);
		
				
		panelPalindromos= new PanelPalindromos(this, "Cadena", "Palindromo?");
		panelPares = new PanelPares(this,"Cadena","Pares");
		pestanas.addTab("Palindromos",  panelPalindromos);
		pestanas.addTab("Pares",panelPares);
		pestanas.setSelectedIndex(0);
		
		contenedor.add(pestanas);

		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setSize(500,400); // remove and uncomment this.pack above
		
		this.setVisible(true);
		panelLogin.setVisible( true );
		pestanas.setVisible( false );
	}
	public void cambiarPanel() {
			panelLogin.setVisible( false );
			pestanas.setVisible( true );
	}
	public Aplicacion getApp(){
		return app;
	}
}