let quantidadeNormal = 0;
let quantidadePrioritario = 0;
let retorno = 1;

const pessoaNormal = 
[
    {
        nome: "teste",
        sobrenome: "teste",
        idade: "10",
        atendimento: "1",
    }
]

const pessoaPrioritaria =
[
    {
        nome: "teste2",
        sobrenome: "teste2",
        idade: "11",
        atendimento: "2",
    }
]

const pessoasAtendidas = []


function cadastraCliente(dados)
{
    dados = 
    {
        nome: prompt("Digite seu nome: "),
        sobrenome: prompt("Digite seu sobrenome: "),
        idade: parseInt(prompt("Digite sua idade: ")),
        atendimento: parseInt(prompt("Digite o tipo de atendimento 1 - normal, 2 - prioritario"))
    }


    if (dados.atendimento == 1)
    {
        pessoaNormal.push(dados)
    }
    else if (dados.atendimento == 2)
    {
        pessoaPrioritaria.push(dados)
    } else alert("Opcao de atendimento Invalida");

}

function atendimentoNormal()
{
    alert(JSON.stringify(pessoaNormal, null, 4));
    pessoasAtendidas.push(pessoaNormal[quantidadeNormal])
    quantidadeNormal++;
}

function atendimentoPrioritario()
{
    alert(JSON.stringify(pessoaPrioritaria, null, 4));
    pessoasAtendidas.push(pessoaPrioritaria[quantidadePrioritario])
    quantidadePrioritario++;
}

function exibeClientesAtendidos()
{
    alert(JSON.stringify(pessoasAtendidas, null, 4));
}

function mostraMenu()
{
    
    while (retorno == 1)
    {

        let opcao = prompt("Digite a opcao desejada: \n" +
        "1 - Cadastrar cliente na fila \n" +
        "2 - Chamar atendimento normal \n" +
        "3 - Chamar atendimento prioritario \n" +
        "4 - Exibir clientes que ja foram atendidos");
        parseInt(opcao);

        if (opcao == 1)
        {
            cadastraCliente();
        }
        else if (opcao == 2)
        {
            atendimentoNormal();
        }
        else if (opcao == 3)
        {
            atendimentoPrioritario();
        }
        else if (opcao == 4)
        {
            exibeClientesAtendidos();
        }
        else console.log("Opcao Invalida \n");
        retorno = parseInt(prompt("Deseja realizar outra funcao?: 1-sim 2-nao"));
    }
}


    mostraMenu();