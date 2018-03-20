package day2;

import java.awt.*;
import javax.swing.*;
/*
<applet code="ButtonDemo1" width=250 height=150>
</applet>
*/
public class Ex2 extends JApplet 
{
  /**
	 * 
	 */
	private static final long serialVersionUID = 1L;

public void init() 
  {
    setLayout(new FlowLayout());
    ImageIcon img1 = new  ImageIcon( "pointhand.jpg"); 
    JButton jb1 = new JButton();
    JButton jb2 = new JButton("Submit");
    JButton jb3 = new JButton(img1);
    JButton jb4 = new JButton("Submit",img1);
    add(jb1);
    add(jb2); add(jb3); add(jb4);
  }
}   
