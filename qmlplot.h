#ifndef QMLPLOT_H
#define QMLPLOT_H

#include <QtQuick>
class advQCstmPltt;
class QCPAbstractPlottable;

class CustomPlotItem : public QQuickPaintedItem {
  Q_OBJECT

public:
  CustomPlotItem(QQuickItem *parent = 0);
  virtual ~CustomPlotItem();

  void paint(QPainter *painter);

  Q_INVOKABLE void initCustomPlot();

protected:
  void routeMouseEvents(QMouseEvent *event);
  void routeWheelEvents(QWheelEvent *event);
  void routeKeyEvents(QKeyEvent *event);

  virtual void mousePressEvent(QMouseEvent *event);
  virtual void mouseReleaseEvent(QMouseEvent *event);
  virtual void mouseMoveEvent(QMouseEvent *event);
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  virtual void wheelEvent(QWheelEvent *event);

  virtual void keyPressEvent(QKeyEvent *event);
  virtual void keyReleaseEvent(QKeyEvent *event);

  virtual void enterEvent(QEvent *event);


  virtual void timerEvent(QTimerEvent *event);

private:
  advQCstmPltt *m_CustomPlot;
  int m_timerId;

private slots:
  void graphClicked(QCPAbstractPlottable *plottable);
  void onCustomReplot();
  void updateCustomPlotSize();
};

#endif // QMLPLOT_H
