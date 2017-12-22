import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

class ListBoxWindow(Gtk.Window):

    def __init__(self):
        Gtk.Window.__init__(self, title="ListBox Demo")
        self.set_border_width(10)
        box_outer = Gtk.Box(orientation = Gtk.Orientation.VERTICAL, spacing = 6)
        
        label = Gtk.Label("Escoge tu Lenguaje de programacion")
        self.add(box_outer)        

        listbox  = Gtk.ListBox()
        listbox.set_selection_mode(Gtk.SelectionMode.NONE)
        box_outer.pack_start(label,True,True,0)
        box_outer.pack_start(listbox,False,True,0)
        
        

        row_j = Gtk.ListBoxRow()
        listbox.add(row_j)
        box_j = Gtk.Box(orientation = Gtk.Orientation.HORIZONTAL, spacing =50)
        Java_label = Gtk.Label("Java", xalign=0)
        Java_button = Gtk.LinkButton.new_with_label(uri = "https://docs.oracle.com/javase/tutorial/", label = "webSite")
        row_j.add(box_j)
        box_j.pack_start(Java_label,True,True,0)
        box_j.pack_start(Java_button,False,True,0)


        row_c = Gtk.ListBoxRow()
        listbox.add(row_c)
        box_c = Gtk.Box(orientation = Gtk.Orientation.HORIZONTAL, spacing =50)
        C_label = Gtk.Label("C", xalign=0)
        C_button = Gtk.LinkButton.new_with_label(uri = "http://en.cppreference.com/w/c", label = "webSite")
        row_c.add(box_c)
        box_c.pack_start(C_label,True,True,0)
        box_c.pack_start(C_button,False,True,0)

        
        row_P = Gtk.ListBoxRow()
        listbox.add(row_P)
        box_P = Gtk.Box(orientation = Gtk.Orientation.HORIZONTAL, spacing =50)
        P_label = Gtk.Label("Python", xalign=0)
        P_button = Gtk.LinkButton.new_with_label(uri = "https://wiki.python.org/moin/BeginnersGuide", label = "webSite")
        row_P.add(box_P)
        box_P.pack_start(P_label,True,True,0)
        box_P.pack_start(P_button,False,True,0)


        row_Js = Gtk.ListBoxRow()
        listbox.add(row_Js)
        box_Js = Gtk.Box(orientation = Gtk.Orientation.HORIZONTAL, spacing =50)
        Js_label = Gtk.Label("JavaScript", xalign=0)
        Js_button = Gtk.LinkButton.new_with_label(uri = "https://developer.mozilla.org/en-US/docs/Web/javascript", label = "webSite")
        row_Js.add(box_Js)
        box_Js.pack_start(Js_label,True,True,0)
        box_Js.pack_start(Js_button,False,True,0)


win = ListBoxWindow()
win.connect("destroy", Gtk.main_quit)
win.show_all()
Gtk.main()
