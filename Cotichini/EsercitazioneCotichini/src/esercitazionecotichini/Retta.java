
package esercitazionecotichini;

public class Retta {
        protected double a,b,c;
        protected String type;
        public Retta(double x,double y,double c){
            this.a=x;
            this.b=y;
            this.c=c;
        }
        public String getTipo(){
            if((a!=0)&&(b!=0)){
                type="Obliqua";
                return type;
            }
            if(a==0){
                type="Orizzontale";
                return type;
            }
            if(b==0){
                type="Verticale";
                return type;
            }else{
                type=" ";
                return type;
            }
        }
        public boolean appartiene(double x,double y){
            double r=a*x+b*y+c;
            if(r==0){
                return true;
            }else{
                return false;
            }
        }
        public String stampa(){
            String Eq=a+"x+"+b+"y+"+c+"=0";
            return Eq;
        }
}
