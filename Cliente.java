package aula.pkg11;


public class Cliente {
    
    private int codigoCli;
    private String nomeCli;
    private double rendaCli;
    
    Cliente(int codigo, String nome, double valor){
        this.codigoCli = codigo;
        this.nomeCli = nome;
        this.rendaCli = valor;
    }
    
    public int teste(){
      int  valor = this.codigoCli * 60;
      return valor;
        
    }
    
    @Override
    public String toString() {
        return "Cliente{" + "codigoCli=" + codigoCli + ", nomeCli=" + nomeCli + ", rendaCli=" + rendaCli + '}';
    }
    
    
}
