package pergunta1;

public class Logger {

    private static Logger instance;

    private Logger() {
    }

    public static Logger getInstance() {
        if (instance == null) {
            instance = new Logger();
            System.out.println("Instanciando Logger.");
        } else {
            System.out.println("Logger já foi instanciado.");
        }
        return instance;
    }

    public void log(String message) {
        System.out.println("Log: " + message);
    }

    static class getInstance extends Logger {

        public getInstance() {
        }
    }
}
