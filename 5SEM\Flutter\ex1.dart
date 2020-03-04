import 'package:flutter/material.dart';

final Color darkBlue = Color.fromARGB(255, 18, 32, 47);

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  Widget _textBox(
    String nome,
    String dica, {
    IconData icone,
  }) {
    return TextField(
      style: TextStyle(fontSize: 16),
      //keyboardType: TextInputType.number,
      decoration: InputDecoration(
          icon: icone == null ? null : Icon(icone),
          hintText: dica,
          labelText: nome),
    );
  }

  Widget _switchList(
    String texto,
    bool value, {
    IconData icone,
  }) {
    return SwitchListTile(
      title: Text(
        texto,
        style: TextStyle(fontSize: 16),
      ),
      value: true,
      onChanged: (bool value) {
        print("onChanged");
      },
      secondary: icone == null ? null : Icon(icone),
    );
  }
  

    @override
    Widget build(BuildContext context) {
      return MaterialApp(
        home: Scaffold(
          body: Container(
            padding: EdgeInsets.all(16.0),
            child: Card(
              child: Column(
                mainAxisSize: MainAxisSize.max,
                crossAxisAlignment: CrossAxisAlignment.stretch,
                children: <Widget>[
                  _textBox(
                    "Estabelecimento",
                    "Digite o nome",
                    icone: Icons.account_balance,
                  ),
                  _switchList(
                    "switch",
                    null,
                    icone: Icons.access_alarm,
                  ),
                ],
              ), // Column
            ), // Card
          ), // Container
        ), // Scaffold
      );
    }
  }
