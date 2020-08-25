#include "qt/utilities.h"

DNAVIZ::Utilities::Utilities (QWidget *parent) {
  // initialise widgets
  QPushButton *test_button_1 = new QPushButton;
  QPushButton *test_button_2 = new QPushButton;
  QPushButton *test_button_3 = new QPushButton;

  // customise widgets
  test_button_1->setText("Button 1");
  test_button_2->setText("Button 2");
  test_button_3->setText("Button 3");

  // create layout and add widgets
  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(test_button_1);
  layout->addWidget(test_button_2);
  layout->addWidget(test_button_3);

  // set layout
  this->setLayout(layout);
}