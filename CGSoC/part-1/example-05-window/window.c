#include <gtk/gtk.h>


//Functions

	void check_button(GtkButton *button, GtkWidget *btn){
		if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(btn))) g_print(gtk_button_get_label(GTK_BUTTON(btn)));
	};

int main (int argc, char *argv[]){

	GtkWidget *win,*label,*C_btn,*Jv_btn,*Py_btn,*Js_btn,*grid,*quit_btn,*learn_btn;
	gtk_init (&argc, &argv);
	win = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	

//adding the label
	label = gtk_label_new("Languaje Selector");
//SIZE
	gtk_window_set_default_size (GTK_WINDOW(win),500,500);
//grid things
	grid = gtk_grid_new();
//buttons 
	C_btn = gtk_check_button_new_with_label("C");
	Jv_btn = gtk_check_button_new_with_label("Java");
	Py_btn = gtk_check_button_new_with_label("Python");
	Js_btn = gtk_check_button_new_with_label("JavaScript");
	quit_btn = gtk_button_new_with_label("Quit");
	learn_btn = gtk_button_new_with_label("Learn");

//Give a title
	gtk_window_set_title (GTK_WINDOW(win),"Languaje Selector, con C");
//Signals for the program
	g_signal_connect(quit_btn,"clicked",G_CALLBACK(gtk_main_quit),NULL);
	g_signal_connect(win,"destroy",G_CALLBACK(gtk_main_quit),NULL);
	g_signal_connect(learn_btn,"clicked",G_CALLBACK(check_button),C_btn);
	g_signal_connect(learn_btn,"clicked",G_CALLBACK(check_button),Jv_btn);
	g_signal_connect(learn_btn,"clicked",G_CALLBACK(check_button),Py_btn);
	g_signal_connect(learn_btn,"clicked",G_CALLBACK(check_button),Js_btn);
//grid addings

	gtk_grid_attach(GTK_GRID (grid),Jv_btn,1,1,1,1);
	gtk_grid_attach_next_to (GTK_GRID (grid),C_btn,Jv_btn,GTK_POS_RIGHT,1,1);
	gtk_grid_attach_next_to (GTK_GRID (grid),Py_btn,Jv_btn,GTK_POS_BOTTOM,1,1);
	gtk_grid_attach_next_to (GTK_GRID (grid),Js_btn,Py_btn,GTK_POS_RIGHT,1,1);

	gtk_grid_attach_next_to (GTK_GRID (grid),quit_btn,Py_btn,GTK_POS_BOTTOM,1,1);
	gtk_grid_attach_next_to (GTK_GRID (grid),learn_btn,quit_btn,GTK_POS_RIGHT,1,1);

//to add the label to the win
	//gtk_container_add(GTK_CONTAINER (win),label);
	//gtk_label_set_xalign(GTK_LABEL(label),0);
	//gtk_label_set_yalign(GTK_LABEL(label),0);

	gtk_container_add(GTK_CONTAINER (win),grid);
//para mostrar la ventana
	gtk_widget_show_all(win);
	
	gtk_main();
	return 0;
}
