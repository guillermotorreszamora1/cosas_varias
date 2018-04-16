package Controlador;
import Modelo.*;
import Vista.*;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


public class boton1action implements ActionListener {
	Aplicacion aplicacion;
	PanelLogin panel;
	public boton1action(Aplicacion app,PanelLogin panel){
		aplicacion = app;
		this.panel = panel;
	}
	public void actionPerformed(ActionEvent evento) {
			if(aplicacion.loginOK(panel.getUsuario(),panel.getContrasena())){
				panel.getGui().cambiarPanel();
			}
    }
}
