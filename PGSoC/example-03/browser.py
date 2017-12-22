import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

class ListBoxWindow(Gtk.Window):
    
    def __init__(self):
        Gtk.Window.__init__(self, title = "ListBox")
        box = Gtk.Box(orientation = Gtk.Orientation.HORIZONTAL, spacing = 9)
        self.add(box)
        self.set_border_width(10)
        
        row_box = Gtk.ListBoxRow()
        hbox = Gtk.Box(orientation = Gtk.Orientation.HORIZONTAL, spacing = 50)
        label1 = Gtk.Label("HOLA WE", xalign = 0)
        hbox.pack_start(label1,True,True,0)
        row_box.add(hbox)
        box.add(row_box)


win = ListBoxWindow()
win.connect("destroy",Gtk.main_quit)
win.show_all()
Gtk.main()
