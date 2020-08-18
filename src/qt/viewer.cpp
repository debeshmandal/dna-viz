#include "viewer.h"

DNAVIZ::Viewer::Viewer(QWidget *parent) : 
  QLabel(parent)
{
  setText("Hello World");
}