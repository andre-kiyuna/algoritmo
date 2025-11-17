#include <stdio.h>

void bemvindo();
void atelogo();
float registrarConsumo(float agua[], float media);
float calcularMedia(float agua[], float media);
int main()
{
    bemvindo();
    float agua[13], media;
    agua[0]=0;
    int i;
    registrarConsumo(agua, media);
    calcularMedia(agua, media);
    atelogo();
    return 0;
}
void bemvindo(){
    printf ("O objetivo do programa e calcular a media de consumo de agua por ano\n");
}
void atelogo()
{
    printf ("fim do programa");
}
float registrarConsumo(float agua[], float media){
    float consumo=0;
    media = 0;
    int i;
    for(i=1; i<13; i++){
        printf ("Digite o consumo de agua do %d°mes: ", i);
        scanf ("%f", &agua[i]);
    media = agua[i] + agua[-i];
    }
    for(i=1; i<13; i++){
        printf("%d°mes e: %f\n", i, agua[i]);
    }
    for(i=1; i<13; i++){
    consumo = consumo + agua[i];
    }
    printf ("O consumo do ano: %f\n", consumo);
    return consumo;
}
float calcularMedia(float agua[13], float media){
    agua[0] = media / 12;
    printf ("A media e: %f\n", agua[0]);
    return agua, media;
}

struct clientes cadastrarCliente() {
    struct clientes novoCliente;
    double codigo
    for (int i=0; i<3;i++)
    printf("Digite o nome completo: ");
    scanf(" %49[^\n]", novoCliente.nome);

    printf("Digite o CPF: ");
    scanf("%lf", &novoCliente.cpf);

    printf("Digite o sexo: ");
    scanf(" %c", &novoCliente.sexo);

    printf("Digite o telefone fixo: ");
    scanf(" %14[^\n]", novoCliente.tel.fixo);

    printf("Digite o telefone movel: ");
    scanf(" %15[^\n]", novoCliente.tel.movel);

    novoCliente.codigo = (int)(novoCliente.cpf / 100000.0);
    printf("Nome: %s\n", novoCliente.nome);
    printf("CPF: %lf\n", novoCliente.cpf);
    printf("Sexo: %c\n", novoCliente.sexo);
    printf("Telefone fixo: %s\n", novoCliente.tel.fixo);
    printf("Telefone movel: %s\n", novoCliente.tel.movel);
    printf("Codigo: %d\n", novoCliente.codigo);
    return novoCliente;
}
#include <stdio.h>

struct telefones{
    char fixo[15];
    char movel[16];
};

struct clientes{
    int codigo;
    char nome[50];
    double cpf;
    char sexo;
    struct telefones tel;
};

int geraCodigoCliente(double cpf);

struct clientes cadastrarCliente();

void listarClientes(struct clientes cliente[]);

int geraCodigoCliente(double cpf){
    int codigo = (int)(cpf / 100000.0);
    return codigo;
}

struct clientes cadastrarCliente() {
    struct clientes cliente[3];
    int i = 0;
    do{
    printf("Digite o nome completo: ");
    scanf(" %49[^\n]", cliente[i].nome);

    printf("Digite o CPF: ");
    scanf("%lf", &cliente[i].cpf);

    printf("Digite o sexo: ");
    scanf(" %c", &cliente[i].sexo);

    printf("Digite o telefone fixo: ");
    scanf(" %14[^\n]", cliente[i].tel.fixo);

    printf("Digite o telefone movel: ");
    scanf(" %15[^\n]", cliente[i].tel.movel);

    cliente[i].codigo = geraCodigoCliente(cliente[i].cpf);
    
    printf("Nome: %s\n", cliente[i].nome);
    printf("CPF: %.0lf\n", cliente[i].cpf);
    printf("Sexo: %c\n", cliente[i].sexo);
    printf("Telefone fixo: %s\n", cliente[i].tel.fixo);
    printf("Telefone movel: %s\n", cliente[i].tel.movel);
    printf("Codigo: %d\n", cliente[i].codigo);
    i++;
    } while (i < 3);
    return novoCliente;
}

void listarClientes(struct clientes cliente[]){
    for (int i=0; int<3; int++){
    printf("Nome: %s\n", cliente[i].nome);
    printf("CPF: %.0lf\n", cliente[i].cpf);
    printf("Sexo: %c\n", cliente[i].sexo);
    printf("Telefone fixo: %s\n", cliente[i].tel.fixo);
    printf("Telefone movel: %s\n", cliente[i].tel.movel);
    printf("Codigo: %d\n", cliente[i].codigo);
    }
};
int main()
{
    struct clientes cadastrarCliente();
    void listarClientes(struct clientes cliente[]);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

// ==============================================
// ESTRUTURAS
// ==============================================

// Estrutura para armazenar os telefones do cliente (fixo e móvel)
struct telefones {
    char fixo[15];      
    char movel[16];     
};

// Estrutura para armazenar os dados de um cliente
struct clientes {
    int codigo;                 // Código gerado automaticamente a partir dos 6 primeiros dígitos do CPF
    char nome[50];              
    double cpf;                 
    char sexo;                  
    struct telefones tel;       
};

// Estrutura para armazenar marca e modelo de um produto
struct modelos {
    char marca[20];     
    char modelo[20];   
};

// Estrutura para armazenar os dados de um produto
struct produtos {
    int codigo;                 // Código gerado a partir da marca e modelo (hash)
    char nome[20];              
    struct modelos modelo;      
    double valor;               
};

// Estrutura para armazenar uma venda (carrinho de compras)
struct carrinhos {
    struct clientes cliente;    // Cliente que está realizando a compra
    struct produtos produto[3]; // Array com até 3 produtos diferentes
    int quantidade[3];          // Quantidade de cada produto (max 3)
    double subtotal;            // Valor total antes do desconto
    double desconto;            // Percentual de desconto aplicado (0 a 100)
    double total;               // Valor final após aplicar o desconto
};


// ==============================================
// CABEÇALHO DAS FUNÇÕES
// ==============================================
void mostrarMenuInicial();
struct clientes cadastrarCliente();
int gerarCodCpf(double cpf);
void listaClientes(struct clientes lista[], int qtdCliente);

struct produtos cadastrarProduto();
int gerarCodProduto(char marca[], char modelo[]);
void listaProdutos(struct produtos lista[]);

struct carrinhos efetuarVenda(struct clientes listaClientes[], int qtdCliente,
                               struct produtos listaProdutos[], int qtdProduto);

struct clientes localizarCliente(int codigo, struct clientes lista[]);
struct produtos localizarProduto(int codigo, struct produtos lista[]);

void listarCarrinho(struct carrinhos c);
double calcularSubtotal(struct carrinhos c);
double calcularTotal(double subtotal, double desconto);
void finalizarVenda(struct carrinhos c);


// ==============================================
// FUNÇÃO MENU
// ==============================================

// Exibe o menu principal do sistema
void mostrarMenuInicial() {
    printf("\n+-------------------------------------------+");
    printf("\n|               MERCADO DIGITAL             |");
    printf("\n+-------------------------------------------+");
    printf("\n| 1 - Cadastrar Cliente                     |");
    printf("\n| 2 - Cadastrar Produto                     |");
    printf("\n| 3 - Listar Clientes                       |");
    printf("\n| 4 - Listar Produtos                       |");
    printf("\n| 5 - Efetuar Venda                         |");
    printf("\n| 0 - Sair                                  |");
    printf("\n+-------------------------------------------+");
    printf("\nEscolha: ");
}


// ==============================================
// CLIENTES
// ==============================================

// Realiza o cadastro de um novo cliente solicitando seus dados
struct clientes cadastrarCliente() {
    
    int digitos;
    char telefone;  // Variável para verificar se o cliente possui telefone fixo
    
    struct clientes temp; 
    printf("\n--- Cadastro de Cliente ---\n");

    // Lê o nome completo
    printf("Nome: ");
    scanf(" %[^\n]", temp.nome);

    // Loop até o usuário digitar um CPF válido com 11 dígitos
    do {
        printf("CPF (apenas numeros): ");
        scanf("%lf", &temp.cpf);
        
        // Conta quantos dígitos tem o CPF
        digitos = 0;
        double tempCpf = temp.cpf;
        
        while(tempCpf >= 1) {
            tempCpf /= 10;
            digitos++;
        }
        
        if(digitos != 11) {
            printf("Erro! O CPF deve ter exatamente 11 digitos. Tente novamente.\n");
        }
        
    } while(digitos != 11);

    do {
    printf("Sexo (M/F): ");
    scanf(" %c", &temp.sexo);
    
    if (temp.sexo != 'M' && temp.sexo != 'm' && temp.sexo != 'F' && temp.sexo != 'f') {
        printf("Entrada inválida! Digite apenas M ou F.\n");
    }
} while (temp.sexo != 'M' && temp.sexo != 'm' && temp.sexo != 'F' && temp.sexo != 'f');
    // Pergunta se o cliente possui telefone fixo
    printf("Possui telefone fixo? (S/N): ");
    scanf(" %c", &telefone);
    
    // Se possuir telefone fixo, solicita o número
    if(telefone == 'S' || telefone == 's'){
        printf("Telefone fixo ((xx)-xxxx-xxxx): ");
        scanf("%s", &temp.tel.fixo);
    }

    // Telefone móvel é obrigatório
    printf("Telefone movel ((xx)-xxxxx-xxxx): ");
    scanf("%s", temp.tel.movel);

    // Gera o código do cliente baseado no CPF
    temp.codigo = gerarCodCpf(temp.cpf);

    printf("Cliente cadastrado! Codigo: %d\n", temp.codigo);

    return temp;
}

// Pega os 6 primeiros dígitos do CPF como código
int gerarCodCpf(double cpf) {
    int codigo = (int)(cpf / 100000.0);
    return codigo;
}

// Exibe a lista de todos os clientes cadastrados
void listaClientes(struct clientes lista[3], int qtdCliente) {
    int i;
    
    printf("\n--- Lista de Clientes ---\n");

    if(qtdCliente == 0) {
        printf("\n--- Nenhum cliente cadastrado ---\n");
    } else {
        for (i = 0; i < qtdCliente; i++) {
            printf("%d - %s | CPF: %.0lf | Codigo: %d\n",
                   i + 1, lista[i].nome, lista[i].cpf, lista[i].codigo);
        }
    }
}


// ==============================================
// PRODUTOS
// ==============================================

// Realiza o cadastro de um novo produto solicitando seus dados
struct produtos cadastrarProduto() {
    struct produtos temp;  
    printf("\n--- Cadastro de Produto ---\n");

    // Lê o nome do produto
    printf("Nome: ");
    scanf(" %[^\n]", &temp.nome);

    // Lê a marca do produto
    printf("Marca (ex: LG): ");
    scanf(" %[^\n]", &temp.modelo.marca);

    // Lê o modelo do produto
    printf("Modelo (ex: TV): ");
    scanf(" %[^\n]", &temp.modelo.modelo);

    // Lê o preço do produto
    printf("Valor: R$ ");
    scanf("%lf", &temp.valor);

    // Gera um código único baseado nos primeiros caracteres da marca e modelo (hash)
    temp.codigo = gerarCodProduto(temp.modelo.marca, temp.modelo.modelo);

    printf("Produto cadastrado! Codigo: %d\n", temp.codigo);
    return temp;
}

// Gera um código único para o produto usando hash dos primeiros 2 caracteres
int gerarCodProduto(char marca[20], char modelo[20]) {
    // Obtém o código ASCII dos primeiros caracteres
    int C1 = marca[0];      // Primeiro caractere da marca
    int C2 = marca[1];      // Segundo caractere da marca
    int C3 = modelo[0];     // Primeiro caractere do modelo
    int C4 = modelo[1];     // Segundo caractere do modelo

    // Calcula um hash usando multiplicação por pesos diferentes
    // Fórmula: C1*313 + C2*312 + C3*311 + C4*310
    int hash = (C1 * 29791) + (C2 * 961) + (C3 * 31) + C4;
    
    // Garante que o código seja positivo
    if (hash < 0) {
        return hash * (-1);
    } else {
        return hash;
    }
}

// Exibe a lista de todos os produtos cadastrados
void listarProdutos(struct produtos lista[], int qtdProduto) {
    int i;
    
    if(qtdProduto != 0){ 
    printf("\n--- Lista de Produtos ---\n");
    // Percorre o array de produtos e exibe suas informações
    for (i = 0; i < qtdProduto; i++) {
        printf("%d - %s | %s-%s | R$ %.2f | Codigo: %d\n",
            i + 1, lista[i].nome, lista[i].modelo.marca,
            lista[i].modelo.modelo, lista[i].valor, lista[i].codigo);
        }
    }
    else{
        printf("\n--- Nenhum produto Cadastrado ---\n");
    }
}


// ==============================================
// LOCALIZAÇÃO
// ==============================================

// Busca um cliente na lista pelo código
struct clientes localizarCliente(int codigo, struct clientes lista[]) {
    int i;
    // Percorre o array de clientes
    for (i = 0; i < 3; i++) {
        // Se encontrar o código, retorna o cliente
        if (lista[i].codigo == codigo) {
            return lista[i];
        }
    }

    // Se não encontrar, retorna uma struct com código -1 (indicador de erro)
    struct clientes vazio;
    vazio.codigo = -1;
    return vazio;
}

// Busca um produto na lista pelo código
struct produtos localizarProduto(int codigo, struct produtos lista[]) {
    int i;
    // Percorre o array de produtos
    for (i = 0; i < 10; i++) {
        // Se encontrar o código, retorna o produto
        if (lista[i].codigo == codigo) {
            return lista[i];
        }
    }

    // Se não encontrar, retorna uma struct com código -1 (indicador de erro)
    struct produtos vazio;
    vazio.codigo = -1;
    return vazio;
}


// ==============================================
// VENDA
// ==============================================

// Realiza o processo completo de uma venda
// Retorna um carrinho completo com todos os dados da venda
struct carrinhos efetuarVenda(struct clientes ClientesCadastrados[], int qtdCliente, struct produtos ProdutosCadastrados[], int qtdProduto) {

    struct carrinhos carrinho;  // Estrutura para armazenar a venda
    int codCliente, codProduto, i, pos = 0; 
    char continuar;  // Variável para controlar se o usuário quer adicionar mais produtos
    
    for(i = 0; i < 3; i++) {
        carrinho.produto[i].codigo = 0;
        carrinho.quantidade[i] = 0;
    }

    printf("\n--- Nova Venda ---\n");

    // Exibe a lista de clientes para o usuário escolher
    listaClientes(ClientesCadastrados, qtdCliente);

    // Solicita o código do cliente
    printf("Digite o codigo do cliente: ");
    scanf("%d", &codCliente);

    // Busca o cliente pelo código
    carrinho.cliente = localizarCliente(codCliente, ClientesCadastrados);

    // Se o cliente não for encontrado, retorna um carrinho com total = -1
    if (carrinho.cliente.codigo == -1) {
        printf("\nCliente nao encontrado!\n");
        carrinho.total = -1;
        return carrinho;
    }

    // Inicializa o subtotal
    carrinho.subtotal = 0;

    // Exibe a lista de produtos disponíveis
    listarProdutos(ProdutosCadastrados, qtdProduto);

    // Loop para adicionar até 3 produtos ao carrinho
    for (i = 0; i < 3; i++) {
        // Solicita o código do produto
        printf("\nDigite o codigo do produto: ");
        scanf("%d", &codProduto);

        // Busca o produto pelo código
        carrinho.produto[pos] = localizarProduto(codProduto, ProdutosCadastrados);
        
        // Se o produto foi encontrado
        if (carrinho.produto[pos].codigo != -1) {
            // Solicita a quantidade (validação entre 1 e 3)
            printf("Quantidade (1 a 3): ");
            scanf("%d", &carrinho.quantidade[pos]);
            
            // Valida a quantidade
            if (carrinho.quantidade[pos] < 1 || carrinho.quantidade[pos] > 3) {
                printf("Quantidade invalida! Definindo para 1.\n");
                carrinho.quantidade[pos] = 1;
            }
            
            // Incrementa a posição para o próximo produto
            pos++;
            
            // Se ainda há espaço no carrinho, pergunta se quer adicionar mais produtos
            if (pos < 3) {
                printf("\nDeseja adicionar outro produto? (S/N): ");
                scanf(" %c", &continuar);
                
                // Se não quiser adicionar mais, sai do loop
                if (continuar == 'N' || continuar == 'n') {
                    break;
                }
            }
        } else {
            printf("Produto nao encontrado!\n");
        }
    }

    // Solicita o percentual de desconto
    printf("\nDigite o desconto (0 a 100): ");
    scanf("%lf", &carrinho.desconto);

    // Calcula o subtotal (soma dos produtos * quantidades)
    carrinho.subtotal = calcularSubtotal(carrinho);
    
    // Calcula o total com desconto
    carrinho.total = calcularTotal(carrinho.subtotal, carrinho.desconto);

    // Exibe o resumo da venda
    finalizarVenda(carrinho);
    
    return carrinho;
}

// Percorre todos os produtos do carrinho e soma seus valores
double calcularSubtotal(struct carrinhos c) {
    int i;
    double total = 0;
    // Para cada produto no carrinho
    for (i = 0; i < 3; i++) {
        // Se o produto existe (código > 0)
        if (c.produto[i].codigo > 0)
            // Soma o valor do produto multiplicado pela quantidade
            total += (c.produto[i].valor * c.quantidade[i]);
    }
    return total;
}

// Calcula o valor total após aplicar o desconto
// Fórmula: subtotal - (subtotal * percentual / 100)
double calcularTotal(double subtotal, double desconto) {
    return subtotal - (subtotal * (desconto / 100));
}

// Exibe os itens do carrinho de forma detalhada
void listarCarrinho(struct carrinhos c) {
    int i;
    printf("\n--- CARRINHO ---\n");
    // Exibe informações do cliente
    printf("Cliente: %s | Codigo: %d\n", c.cliente.nome, c.cliente.codigo);

    // Exibe cada produto do carrinho
    for (i = 0; i < 3; i++) {
        // Se o produto existe (código > 0)
        if (c.produto[i].codigo > 0)
            printf("%s - %s/%s | qtd: %d | R$ %.2f\n",
                c.produto[i].nome, c.produto[i].modelo.marca,
                c.produto[i].modelo.modelo, c.quantidade[i],
                c.produto[i].valor);
    }
}

// Mostra carrinho, subtotal, desconto e total a pagar
void finalizarVenda(struct carrinhos c) {
    // Exibe os itens do carrinho
    listarCarrinho(c);
    
    // Exibe os valores
    printf("\nSubtotal: R$ %.2f", c.subtotal);
    printf("\nDesconto: %.0f%%", c.desconto);
    printf("\nTOTAL A PAGAR: R$ %.2f\n", c.total);
}


// ==============================================
// MAIN
// ==============================================
int main() {
    // Arrays para armazenar os dados cadastrados
    struct clientes ClientesCadastrados[3];      // Até 3 clientes
    struct produtos ProdutosCadastrados[10];     // Até 10 produtos
    struct carrinhos carrinhoAtual;              // Carrinho da venda atual

    // Contadores para controlar quantos registros foram cadastrados
    int qtdCliente = 0, qtdProduto = 0;
    int opcao;  // Opção escolhida pelo usuário no menu
    int i;
    
    
    for(i = 0; i < 3; i++) {
        ClientesCadastrados[i].cpf = 0;
        ClientesCadastrados[i].codigo = 0;
    }
    
    for(i = 0; i < 10; i++) {
        ProdutosCadastrados[i].codigo = 0;
    }
    // Loop principal do programa
    do {
        // Exibe o menu e lê a opção
        mostrarMenuInicial();
        scanf("%d", &opcao);
        
        // Opção 1: Cadastrar cliente (se não atingiu o limite de 3)
        if (opcao == 1 && qtdCliente < 3)
            ClientesCadastrados[qtdCliente++] = cadastrarCliente();

        // Opção 2: Cadastrar produto (se não atingiu o limite de 10)
        else if (opcao == 2 && qtdProduto < 10)
            ProdutosCadastrados[qtdProduto++] = cadastrarProduto();

        // Opção 3: Listar todos os clientes cadastrados
        else if (opcao == 3)
            listaClientes(ClientesCadastrados, qtdCliente);

        // Opção 4: Listar todos os produtos cadastrados
        else if (opcao == 4)
            listarProdutos(ProdutosCadastrados, qtdProduto);

        // Opção 5: Efetuar uma venda simples
        else if (opcao == 5) {
            // Verifica se há clientes e produtos cadastrados
            if (qtdCliente == 0) {
                printf("\nErro: Nenhum cliente cadastrado! Cadastre um cliente antes de efetuar vendas.\n");
            }
            else if (qtdProduto == 0) {
                printf("\nErro: Nenhum produto cadastrado! Cadastre produtos antes de efetuar vendas.\n");
            }
            else {
                carrinhoAtual = efetuarVenda(ClientesCadastrados, qtdCliente, ProdutosCadastrados, qtdProduto);
            }
        }
            

        // Opção 0: Sair do programa
        else if (opcao == 0)
            printf("\nEncerrando...\n");

        // Opção inválida ou limite de cadastros atingido
        else
            printf("\nOpcao invalida ou limite atingido!\n");

    } while (opcao != 0);  // Continua até o usuário escolher sair

    return 0;
}
