#ifndef OPENGLFRAMETIMER_H
#define OPENGLFRAMETIMER_H

#include <QObject>

class OpenGLFrameTimerPrivate;
class OpenGLFrameTimer : public QObject
{
    Q_OBJECT
public:
    explicit OpenGLFrameTimer(QObject *parent = nullptr);
    ~OpenGLFrameTimer();

    // Public Methods
    void setFrequency(int hz);
    int frequency() const;

signals:
    void timeout(float fps);

public slots:
    void frameSwapped();

private:
    OpenGLFrameTimerPrivate *m_private;
};

#endif // OPENGLFRAMETIMER_H
