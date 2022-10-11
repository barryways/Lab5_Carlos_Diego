#pragma once
#include "Pila.h";

namespace Ejercicio2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Pila* cartas = new Pila();
		Pila* mazo = new Pila();
		Pila* pila1 = new Pila();
		Pila* pila2 = new Pila();
		Pila* pila3 = new Pila();
		Pila* pila4 = new Pila();
		Pila* pila5 = new Pila();
		Pila* pila6 = new Pila();
		Pila* pila7 = new Pila();
	private: System::Windows::Forms::Panel^ pnlLateral;
	private: System::Windows::Forms::TextBox^ tbOrigen;
	private: System::Windows::Forms::TextBox^ tbPosicion;


	private: System::Windows::Forms::TextBox^ tbDestino;

	private: System::Windows::Forms::Label^ lblDestino;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblCartamazoActual;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ lblBtnR;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::TextBox^ tbDestinomazo;

	public:

	public:


		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_Repartir;

	private: System::Windows::Forms::Button^ btnmazo;
	private: System::Windows::Forms::ListBox^ tbMazo;


	private: System::Windows::Forms::Button^ btn_Mover;
	private: System::Windows::Forms::ListBox^ lbPila1;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ lbPila2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ lbPila4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ lbPila3;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ lbPila7;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ListBox^ lbPila6;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ListBox^ lbPila5;


	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_Repartir = (gcnew System::Windows::Forms::Button());
			this->btn_Mover = (gcnew System::Windows::Forms::Button());
			this->btnmazo = (gcnew System::Windows::Forms::Button());
			this->tbMazo = (gcnew System::Windows::Forms::ListBox());
			this->lbPila1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbPila2 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbPila4 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lbPila3 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lbPila7 = (gcnew System::Windows::Forms::ListBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lbPila6 = (gcnew System::Windows::Forms::ListBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lbPila5 = (gcnew System::Windows::Forms::ListBox());
			this->pnlLateral = (gcnew System::Windows::Forms::Panel());
			this->tbDestinomazo = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lblCartamazoActual = (gcnew System::Windows::Forms::Label());
			this->tbOrigen = (gcnew System::Windows::Forms::TextBox());
			this->tbPosicion = (gcnew System::Windows::Forms::TextBox());
			this->tbDestino = (gcnew System::Windows::Forms::TextBox());
			this->lblDestino = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblBtnR = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pnlLateral->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_Repartir
			// 
			this->btn_Repartir->Location = System::Drawing::Point(554, 501);
			this->btn_Repartir->Margin = System::Windows::Forms::Padding(4);
			this->btn_Repartir->Name = L"btn_Repartir";
			this->btn_Repartir->Size = System::Drawing::Size(226, 48);
			this->btn_Repartir->TabIndex = 0;
			this->btn_Repartir->Text = L"R";
			this->btn_Repartir->UseVisualStyleBackColor = true;
			this->btn_Repartir->Click += gcnew System::EventHandler(this, &MyForm::btn_Repartir_Click);
			// 
			// btn_Mover
			// 
			this->btn_Mover->Enabled = false;
			this->btn_Mover->Location = System::Drawing::Point(13, 255);
			this->btn_Mover->Margin = System::Windows::Forms::Padding(4);
			this->btn_Mover->Name = L"btn_Mover";
			this->btn_Mover->Size = System::Drawing::Size(215, 28);
			this->btn_Mover->TabIndex = 7;
			this->btn_Mover->Text = L"Mover Cartas";
			this->btn_Mover->UseVisualStyleBackColor = true;
			this->btn_Mover->Click += gcnew System::EventHandler(this, &MyForm::btn_Mover_Click);
			// 
			// btnmazo
			// 
			this->btnmazo->Enabled = false;
			this->btnmazo->Location = System::Drawing::Point(60, 511);
			this->btnmazo->Margin = System::Windows::Forms::Padding(4);
			this->btnmazo->Name = L"btnmazo";
			this->btnmazo->Size = System::Drawing::Size(120, 28);
			this->btnmazo->TabIndex = 2;
			this->btnmazo->Text = L"Repartir Mazo";
			this->btnmazo->UseVisualStyleBackColor = true;
			this->btnmazo->Click += gcnew System::EventHandler(this, &MyForm::btnmazo_Click);
			// 
			// tbMazo
			// 
			this->tbMazo->FormattingEnabled = true;
			this->tbMazo->ItemHeight = 16;
			this->tbMazo->Location = System::Drawing::Point(28, 411);
			this->tbMazo->Margin = System::Windows::Forms::Padding(4);
			this->tbMazo->Name = L"tbMazo";
			this->tbMazo->Size = System::Drawing::Size(187, 20);
			this->tbMazo->TabIndex = 1;
			this->tbMazo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tbMazo_SelectedIndexChanged);
			// 
			// lbPila1
			// 
			this->lbPila1->FormattingEnabled = true;
			this->lbPila1->ItemHeight = 16;
			this->lbPila1->Location = System::Drawing::Point(335, 89);
			this->lbPila1->Margin = System::Windows::Forms::Padding(4);
			this->lbPila1->Name = L"lbPila1";
			this->lbPila1->Size = System::Drawing::Size(71, 308);
			this->lbPila1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(362, 57);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 22);
			this->label3->TabIndex = 5;
			this->label3->Text = L"I";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(451, 57);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 19);
			this->label4->TabIndex = 7;
			this->label4->Text = L"II";
			// 
			// lbPila2
			// 
			this->lbPila2->FormattingEnabled = true;
			this->lbPila2->ItemHeight = 16;
			this->lbPila2->Location = System::Drawing::Point(433, 89);
			this->lbPila2->Margin = System::Windows::Forms::Padding(4);
			this->lbPila2->Name = L"lbPila2";
			this->lbPila2->Size = System::Drawing::Size(71, 324);
			this->lbPila2->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(668, 56);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 19);
			this->label5->TabIndex = 11;
			this->label5->Text = L"IV";
			// 
			// lbPila4
			// 
			this->lbPila4->FormattingEnabled = true;
			this->lbPila4->ItemHeight = 16;
			this->lbPila4->Location = System::Drawing::Point(650, 89);
			this->lbPila4->Margin = System::Windows::Forms::Padding(4);
			this->lbPila4->Name = L"lbPila4";
			this->lbPila4->Size = System::Drawing::Size(71, 356);
			this->lbPila4->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(550, 57);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 19);
			this->label6->TabIndex = 9;
			this->label6->Text = L"III";
			// 
			// lbPila3
			// 
			this->lbPila3->FormattingEnabled = true;
			this->lbPila3->ItemHeight = 16;
			this->lbPila3->Location = System::Drawing::Point(532, 89);
			this->lbPila3->Margin = System::Windows::Forms::Padding(4);
			this->lbPila3->Name = L"lbPila3";
			this->lbPila3->Size = System::Drawing::Size(71, 340);
			this->lbPila3->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1011, 57);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 19);
			this->label8->TabIndex = 17;
			this->label8->Text = L"VII";
			// 
			// lbPila7
			// 
			this->lbPila7->FormattingEnabled = true;
			this->lbPila7->ItemHeight = 16;
			this->lbPila7->Location = System::Drawing::Point(995, 86);
			this->lbPila7->Margin = System::Windows::Forms::Padding(4);
			this->lbPila7->Name = L"lbPila7";
			this->lbPila7->Size = System::Drawing::Size(71, 404);
			this->lbPila7->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(895, 57);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 19);
			this->label9->TabIndex = 15;
			this->label9->Text = L"VI";
			// 
			// lbPila6
			// 
			this->lbPila6->FormattingEnabled = true;
			this->lbPila6->ItemHeight = 16;
			this->lbPila6->Location = System::Drawing::Point(879, 89);
			this->lbPila6->Margin = System::Windows::Forms::Padding(4);
			this->lbPila6->Name = L"lbPila6";
			this->lbPila6->Size = System::Drawing::Size(71, 388);
			this->lbPila6->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(780, 57);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 19);
			this->label10->TabIndex = 13;
			this->label10->Text = L"V";
			// 
			// lbPila5
			// 
			this->lbPila5->FormattingEnabled = true;
			this->lbPila5->ItemHeight = 16;
			this->lbPila5->Location = System::Drawing::Point(758, 89);
			this->lbPila5->Margin = System::Windows::Forms::Padding(4);
			this->lbPila5->Name = L"lbPila5";
			this->lbPila5->Size = System::Drawing::Size(71, 372);
			this->lbPila5->TabIndex = 12;
			// 
			// pnlLateral
			// 
			this->pnlLateral->BackColor = System::Drawing::Color::White;
			this->pnlLateral->Controls->Add(this->label12);
			this->pnlLateral->Controls->Add(this->tbDestinomazo);
			this->pnlLateral->Controls->Add(this->label11);
			this->pnlLateral->Controls->Add(this->lblCartamazoActual);
			this->pnlLateral->Controls->Add(this->tbOrigen);
			this->pnlLateral->Controls->Add(this->tbPosicion);
			this->pnlLateral->Controls->Add(this->tbDestino);
			this->pnlLateral->Controls->Add(this->lblDestino);
			this->pnlLateral->Controls->Add(this->label2);
			this->pnlLateral->Controls->Add(this->label1);
			this->pnlLateral->Controls->Add(this->btnmazo);
			this->pnlLateral->Controls->Add(this->tbMazo);
			this->pnlLateral->Controls->Add(this->btn_Mover);
			this->pnlLateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlLateral->Location = System::Drawing::Point(0, 0);
			this->pnlLateral->Name = L"pnlLateral";
			this->pnlLateral->Size = System::Drawing::Size(252, 571);
			this->pnlLateral->TabIndex = 18;
			// 
			// tbDestinomazo
			// 
			this->tbDestinomazo->Location = System::Drawing::Point(28, 478);
			this->tbDestinomazo->Name = L"tbDestinomazo";
			this->tbDestinomazo->Size = System::Drawing::Size(187, 22);
			this->tbDestinomazo->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(25, 444);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(155, 17);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Grupo Destino a mover";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// lblCartamazoActual
			// 
			this->lblCartamazoActual->AutoSize = true;
			this->lblCartamazoActual->Location = System::Drawing::Point(25, 378);
			this->lblCartamazoActual->Name = L"lblCartamazoActual";
			this->lblCartamazoActual->Size = System::Drawing::Size(146, 17);
			this->lblCartamazoActual->TabIndex = 16;
			this->lblCartamazoActual->Text = L"Carta del mazo Actual";
			this->lblCartamazoActual->Click += gcnew System::EventHandler(this, &MyForm::lblCartamazoActual_Click);
			// 
			// tbOrigen
			// 
			this->tbOrigen->Location = System::Drawing::Point(18, 86);
			this->tbOrigen->Margin = System::Windows::Forms::Padding(4);
			this->tbOrigen->Name = L"tbOrigen";
			this->tbOrigen->Size = System::Drawing::Size(210, 22);
			this->tbOrigen->TabIndex = 12;
			// 
			// tbPosicion
			// 
			this->tbPosicion->Location = System::Drawing::Point(18, 211);
			this->tbPosicion->Margin = System::Windows::Forms::Padding(4);
			this->tbPosicion->Name = L"tbPosicion";
			this->tbPosicion->Size = System::Drawing::Size(210, 22);
			this->tbPosicion->TabIndex = 15;
			this->tbPosicion->TextChanged += gcnew System::EventHandler(this, &MyForm::tbPosicion_TextChanged);
			// 
			// tbDestino
			// 
			this->tbDestino->Location = System::Drawing::Point(18, 147);
			this->tbDestino->Margin = System::Windows::Forms::Padding(4);
			this->tbDestino->Name = L"tbDestino";
			this->tbDestino->Size = System::Drawing::Size(210, 22);
			this->tbDestino->TabIndex = 13;
			// 
			// lblDestino
			// 
			this->lblDestino->AutoSize = true;
			this->lblDestino->Location = System::Drawing::Point(10, 125);
			this->lblDestino->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDestino->Name = L"lblDestino";
			this->lblDestino->Size = System::Drawing::Size(100, 17);
			this->lblDestino->TabIndex = 14;
			this->lblDestino->Text = L"Grupo Destino";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 173);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 34);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Posiciion de la carta a move\r\nr (nomenclatura de arreglo)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 59);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Grupo Origen";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(280, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(317, 34);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Carlos Daniel Barrientos Castillo -1040121\r\nDiego Andre Cordon Hernandez -1094021"
				L"";
			// 
			// lblBtnR
			// 
			this->lblBtnR->AutoSize = true;
			this->lblBtnR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBtnR->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBtnR->Location = System::Drawing::Point(565, 466);
			this->lblBtnR->Name = L"lblBtnR";
			this->lblBtnR->Size = System::Drawing::Size(225, 17);
			this->lblBtnR->TabIndex = 20;
			this->lblBtnR->Text = L"Pulse R para empezar a jugar";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(13, 13);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(202, 27);
			this->label12->TabIndex = 20;
			this->label12->Text = L"S O L I T A R I O";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(1079, 571);
			this->Controls->Add(this->lblBtnR);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pnlLateral);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lbPila7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lbPila6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lbPila5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btn_Repartir);
			this->Controls->Add(this->lbPila4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lbPila3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lbPila2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lbPila1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->pnlLateral->ResumeLayout(false);
			this->pnlLateral->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		void Crearmazo() {
			for (int i = 1; i < 27; i++)
			{
				if (i >= 0 && i <= 13) {
					cartas->Push(i, 'R');
				}
				else {
					cartas->Push(i - 13, 'R');
				}
			}

			for (int i = 1; i < 27; i++)
			{
				if (i >= 0 && i <= 13) {
					cartas->Push(i, 'N');
				}
				else {
					cartas->Push(i - 13, 'N');
				}
			}

			Random^ random = gcnew Random();
			while (cartas->Count() != 0)
			{
				int posicion = random->Next(0, cartas->Count());
				int nuevoNumero = cartas->GetNumber(posicion);
				char nuevoColor = cartas->GetColor(posicion);
				mazo->Push(nuevoNumero, nuevoColor);
				cartas->PopOf(posicion);
			}

		}

		bool Verificar(Pila* origen, Pila* destino, int elementoOrigen, int elementoDestino) {
			if (origen->GetNumber(elementoOrigen) < destino->GetNumber(elementoDestino)) {
				if (origen->GetColor(elementoOrigen) != destino->GetColor(elementoDestino))
				{
					return true;
				}
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}

		void Movimiento(Pila* origen, Pila* destino, int elemento) {
			int numero = origen->GetNumber(elemento);
			int color = origen->GetColor(elemento);
			destino->Push(numero, color);
			origen->PopOf(elemento);
		}

		void mostrarmazo(ListBox^ listBox, Pila* pila) {
			listBox->Items->Clear();
			int limite = pila->Count() - 1;
			int ascii = pila->GetColor(limite);
			String^ datos;
			if (ascii == 82) {
				datos = Convert::ToString(pila->GetNumber(limite)) + "R";
			}
			else {
				datos = Convert::ToString(pila->GetNumber(limite)) + "N";
			}
			listBox->Items->Add(datos);
		}

		void llenarPila(ListBox^ listBox, Pila* pilaALlenar) {
			listBox->Items->Clear();
			for (int i = 0; i < pilaALlenar->Count(); i++)
			{
				int ascii = pilaALlenar->GetColor(i);
				String^ datos;
				if (ascii == 82) {
					datos = Convert::ToString(pilaALlenar->GetNumber(i)) + "R";
				}
				else {
					datos = Convert::ToString(pilaALlenar->GetNumber(i)) + "N";
				}
				listBox->Items->Add(datos);
			}
		}

		void LlenarPilas(Pila* pilaActual, int limite) {
			Random^ random = gcnew Random();
			for (int i = 0; i < limite; i++)
			{
				int posicion = random->Next(0, mazo->Count());
				int number = mazo->GetNumber(posicion);
				char color = mazo->GetColor(posicion);
				if (i == 0)
				{
					pilaActual->Push(number, color);
					mazo->PopOf(posicion);
				}
				else {
					if (pilaActual->GetNumber(i - 1) != 1)
					{
						for (int j = pilaActual->GetNumber(i - 1) - 1; j > 0; j--)
						{
							int posicion1 = mazo->IndexOf(j);
							int posicion2 = mazo->LastIndexOf(j);
							if (posicion1 != posicion2)
							{
								if (posicion1 != -1)
								{
									if (Verificar(mazo, pilaActual, posicion1, i - 1))
									{
										Movimiento(mazo, pilaActual, posicion1);
										j = 0;
									}
								}
								else if (posicion2 != -1)
								{
									if (Verificar(mazo, pilaActual, posicion2, i - 1))
									{
										Movimiento(mazo, pilaActual, posicion2);
										j = 0;
									}
								}
							}
							else {
								if (posicion1 != -1)
								{
									if (Verificar(mazo, pilaActual, posicion1, i - 1))
									{
										Movimiento(mazo, pilaActual, posicion1);
										j = 0;
									}
								}
							}
						}
					}
					else {
						i = limite;
					}
				}
			}
		}

		void RepartirCartas() {
			Crearmazo();
			Random^ aleatorio = gcnew Random();
			int pos = aleatorio->Next(0, mazo->Count());
			int number = mazo->GetNumber(pos);
			char color = mazo->GetColor(pos);
			pila1->Push(number, color);
			mazo->PopOf(pos);


			LlenarPilas(pila2, 2);
			LlenarPilas(pila3, 3);
			LlenarPilas(pila4, 4);
			LlenarPilas(pila5, 5);
			LlenarPilas(pila6, 6);
			LlenarPilas(pila7, 7);
		}

		void Ganar() {
			if (pila1->Count() == 6 || pila2->Count() == 7 || pila3->Count() == 8 || pila4->Count() == 9 || pila5->Count() == 10 || pila6->Count() == 11 || pila7->Count() == 12) {
				MessageBox::Show("Usted ha ganado",
					"Partida Exitosa",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
				btnmazo->Enabled = false;
				btn_Mover->Enabled = false;
			}
		}

#pragma endregion
	private: System::Void btn_Repartir_Click(System::Object^ sender, System::EventArgs^ e) {
		RepartirCartas();
		mostrarmazo(tbMazo, mazo);
		llenarPila(lbPila1, pila1);
		llenarPila(lbPila2, pila2);
		llenarPila(lbPila3, pila3);
		llenarPila(lbPila4, pila4);
		llenarPila(lbPila5, pila5);
		llenarPila(lbPila6, pila6);
		llenarPila(lbPila7, pila7);
		btn_Repartir->Enabled = false;
		btn_Repartir->Visible = false;
		lblBtnR->Visible = false;
		btn_Mover->Enabled = true;
		btnmazo->Enabled = true;
	}
	private: System::Void btn_Mover_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int origen = Convert::ToInt32(tbOrigen->Text);
			int destino = Convert::ToInt32(tbDestino->Text);
			int posicion = Convert::ToInt32(tbPosicion->Text);

			switch (origen)
			{
			case 1:
				if (posicion >= 0 && posicion < pila1->Count()) {
					if (destino == 2) {
						if (Verificar(pila1, pila2, posicion, pila2->Count() - 1))
						{
							while (posicion != pila1->Count())
							{
								Movimiento(pila1, pila2, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo concretar el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 3) {
						if (Verificar(pila1, pila3, posicion, pila3->Count() - 1))
						{
							while (posicion != pila1->Count())
							{
								Movimiento(pila1, pila3, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo concretar el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 4) {
						if (Verificar(pila1, pila4, posicion, pila4->Count() - 1))
						{
							while (posicion != pila1->Count())
							{
								Movimiento(pila1, pila4, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo concretar el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 5) {
						if (Verificar(pila1, pila5, posicion, pila5->Count() - 1))
						{
							while (posicion != pila1->Count())
							{
								Movimiento(pila1, pila5, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo concretar el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 6) {
						if (Verificar(pila1, pila6, posicion, pila6->Count() - 1))
						{
							while (posicion != pila1->Count())
							{
								Movimiento(pila1, pila6, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo concretar el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 7) {
						if (Verificar(pila1, pila7, posicion, pila7->Count() - 1))
						{
							while (posicion != pila1->Count())
							{
								Movimiento(pila1, pila7, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo concretar el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else {
						MessageBox::Show("El grupo destino no es valido",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("La posicion es mayor a la cantidad de elementos de la lista",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
				}
				break;
			case 2:
				if (posicion >= 0 && posicion < pila2->Count())
				{
					if (destino == 1) {
						if (Verificar(pila2, pila1, posicion, pila1->Count() - 1))
						{
							while (posicion != pila2->Count())
							{
								Movimiento(pila2, pila1, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 3) {
						if (Verificar(pila2, pila3, posicion, pila3->Count() - 1))
						{
							while (posicion != pila2->Count())
							{
								Movimiento(pila2, pila3, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 4) {
						if (Verificar(pila2, pila4, posicion, pila4->Count() - 1))
						{
							while (posicion != pila2->Count())
							{
								Movimiento(pila2, pila4, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 5) {
						if (Verificar(pila2, pila5, posicion, pila5->Count() - 1))
						{
							while (posicion != pila2->Count())
							{
								Movimiento(pila2, pila5, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 6) {
						if (Verificar(pila2, pila6, posicion, pila6->Count() - 1))
						{
							while (posicion != pila2->Count())
							{
								Movimiento(pila2, pila6, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 7) {
						if (Verificar(pila2, pila7, posicion, pila7->Count() - 1))
						{
							while (posicion != pila2->Count())
							{
								Movimiento(pila2, pila7, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else {
						MessageBox::Show("Grupo destino no v�lido",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("La posici�n es mayor a la cantidad de elementos de la lista",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
				}
				break;
			case 3:
				if (posicion >= 0 && posicion < pila3->Count())
				{
					if (destino == 1) {
						if (Verificar(pila3, pila1, posicion, pila1->Count() - 1))
						{
							while (posicion != pila3->Count())
							{
								Movimiento(pila3, pila1, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 2) {
						if (Verificar(pila3, pila2, posicion, pila2->Count() - 1))
						{
							while (posicion != pila3->Count())
							{
								Movimiento(pila3, pila2, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 4) {
						if (Verificar(pila3, pila4, posicion, pila4->Count() - 1))
						{
							while (posicion != pila3->Count())
							{
								Movimiento(pila3, pila4, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 5) {
						if (Verificar(pila3, pila5, posicion, pila5->Count() - 1))
						{
							while (posicion != pila3->Count())
							{
								Movimiento(pila3, pila5, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 6) {
						if (Verificar(pila3, pila6, posicion, pila6->Count() - 1))
						{
							while (posicion != pila3->Count())
							{
								Movimiento(pila3, pila6, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 7) {
						if (Verificar(pila3, pila7, posicion, pila7->Count() - 1))
						{
							while (posicion != pila3->Count())
							{
								Movimiento(pila3, pila7, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else {
						MessageBox::Show("Grupo destino no v�lido",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("La posici�n es mayor a la cantidad de elementos de la lista",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
				}
				break;
			case 4:
				if (posicion >= 0 && posicion < pila4->Count())
				{
					if (destino == 1) {
						if (Verificar(pila4, pila1, posicion, pila1->Count() - 1))
						{
							while (posicion != pila4->Count())
							{
								Movimiento(pila4, pila1, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 2) {
						if (Verificar(pila4, pila2, posicion, pila2->Count() - 1))
						{
							while (posicion != pila4->Count())
							{
								Movimiento(pila4, pila2, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 3) {
						if (Verificar(pila4, pila3, posicion, pila3->Count() - 1))
						{
							while (posicion != pila4->Count())
							{
								Movimiento(pila4, pila3, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 5) {
						if (Verificar(pila4, pila5, posicion, pila5->Count() - 1))
						{
							while (posicion != pila4->Count())
							{
								Movimiento(pila4, pila5, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 6) {
						if (Verificar(pila4, pila6, posicion, pila6->Count() - 1))
						{
							while (posicion != pila4->Count())
							{
								Movimiento(pila4, pila6, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 7) {
						if (Verificar(pila4, pila7, posicion, pila7->Count() - 1))
						{
							while (posicion != pila4->Count())
							{
								Movimiento(pila4, pila7, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else {
						MessageBox::Show("Grupo destino no v�lido",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("La posici�n es mayor a la cantidad de elementos de la lista",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
				}
				break;
			case 5:
				if (posicion >= 0 && posicion < pila5->Count())
				{
					if (destino == 1) {
						if (Verificar(pila5, pila1, posicion, pila1->Count() - 1))
						{
							while (posicion != pila5->Count())
							{
								Movimiento(pila5, pila1, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 2) {
						if (Verificar(pila5, pila2, posicion, pila2->Count() - 1))
						{
							while (posicion != pila5->Count())
							{
								Movimiento(pila5, pila2, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 3) {
						if (Verificar(pila5, pila3, posicion, pila3->Count() - 1))
						{
							while (posicion != pila5->Count())
							{
								Movimiento(pila5, pila3, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 4) {
						if (Verificar(pila5, pila4, posicion, pila4->Count() - 1))
						{
							while (posicion != pila5->Count())
							{
								Movimiento(pila5, pila4, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 6) {
						if (Verificar(pila5, pila6, posicion, pila6->Count() - 1))
						{
							while (posicion != pila5->Count())
							{
								Movimiento(pila5, pila6, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 7) {
						if (Verificar(pila5, pila7, posicion, pila7->Count() - 1))
						{
							while (posicion != pila5->Count())
							{
								Movimiento(pila5, pila7, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else {
						MessageBox::Show("Grupo destino no v�lido",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("La posici�n es mayor a la cantidad de elementos de la lista",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
				}
				break;
			case 6:
				if (posicion >= 0 && posicion < pila6->Count())
				{
					if (destino == 1) {
						if (Verificar(pila6, pila1, posicion, pila1->Count() - 1))
						{
							while (posicion != pila6->Count())
							{
								Movimiento(pila6, pila1, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 2) {
						if (Verificar(pila6, pila2, posicion, pila2->Count() - 1))
						{
							while (posicion != pila6->Count())
							{
								Movimiento(pila6, pila2, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 3) {
						if (Verificar(pila6, pila3, posicion, pila3->Count() - 1))
						{
							while (posicion != pila6->Count())
							{
								Movimiento(pila6, pila3, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 4) {
						if (Verificar(pila6, pila4, posicion, pila4->Count() - 1))
						{
							while (posicion != pila6->Count())
							{
								Movimiento(pila6, pila4, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 5) {
						if (Verificar(pila6, pila5, posicion, pila5->Count() - 1))
						{
							while (posicion != pila6->Count())
							{
								Movimiento(pila6, pila5, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 7) {
						if (Verificar(pila6, pila7, posicion, pila7->Count() - 1))
						{
							while (posicion != pila6->Count())
							{
								Movimiento(pila6, pila7, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else {
						MessageBox::Show("Grupo destino no v�lido",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("La posici�n es mayor a la cantidad de elementos de la lista",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
				}
				break;
			case 7:
				if (posicion >= 0 && posicion < pila7->Count())
				{
					if (destino == 1) {
						if (Verificar(pila7, pila1, posicion, pila1->Count() - 1))
						{
							while (posicion != pila7->Count())
							{
								Movimiento(pila7, pila1, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 2) {
						if (Verificar(pila7, pila2, posicion, pila2->Count() - 1))
						{
							while (posicion != pila7->Count())
							{
								Movimiento(pila7, pila2, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 3) {
						if (Verificar(pila7, pila3, posicion, pila3->Count() - 1))
						{
							while (posicion != pila7->Count())
							{
								Movimiento(pila7, pila3, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 4) {
						if (Verificar(pila7, pila4, posicion, pila4->Count() - 1))
						{
							while (posicion != pila7->Count())
							{
								Movimiento(pila7, pila4, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 5) {
						if (Verificar(pila7, pila5, posicion, pila5->Count() - 1))
						{
							while (posicion != pila7->Count())
							{
								Movimiento(pila7, pila5, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else if (destino == 6) {
						if (Verificar(pila7, pila6, posicion, pila6->Count() - 1))
						{
							while (posicion != pila7->Count())
							{
								Movimiento(pila7, pila6, posicion);
							}
						}
						else {
							MessageBox::Show("No se pudo hacer el movimiento",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					else {
						MessageBox::Show("Grupo destino no v�lido",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("La posici�n es mayor a la cantidad de elementos de la lista",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Warning);
				}
				break;
			default:
				MessageBox::Show("Grupo origen no v�lido",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation);
				break;
			}
			mostrarmazo(tbMazo, mazo);
			llenarPila(lbPila1, pila1);
			llenarPila(lbPila2, pila2);
			llenarPila(lbPila3, pila3);
			llenarPila(lbPila4, pila4);
			llenarPila(lbPila5, pila5);
			llenarPila(lbPila6, pila6);
			llenarPila(lbPila7, pila7);
			Ganar();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Ingreso de datos no v�lido",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
	private: System::Void btnmazo_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int destino = Convert::ToInt32(tbDestinomazo->Text);
			if (mazo->Count() > 0)
			{
				switch (destino)
				{
				case 1:
					if (pila1->Count() == 0)
					{
						Movimiento(mazo, pila1, mazo->Count() - 1);
					}
					else {
						if (Verificar(mazo, pila1, mazo->Count() - 1, pila1->Count() - 1))
						{
							Movimiento(mazo, pila1, mazo->Count() - 1);
						}
						else {
							MessageBox::Show("No se pudo tomar la carta del mazo",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					break;
				case 2:
					if (pila2->Count() == 0)
					{
						Movimiento(mazo, pila2, mazo->Count() - 1);
					}
					else {
						if (Verificar(mazo, pila2, mazo->Count() - 1, pila2->Count() - 1))
						{
							Movimiento(mazo, pila2, mazo->Count() - 1);
						}
						else {
							MessageBox::Show("No se pudo tomar la carta del mazo",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					break;
				case 3:
					if (pila3->Count() == 0)
					{
						Movimiento(mazo, pila3, mazo->Count() - 1);
					}
					else {
						if (Verificar(mazo, pila3, mazo->Count() - 1, pila3->Count() - 1))
						{
							Movimiento(mazo, pila3, mazo->Count() - 1);
						}
						else {
							MessageBox::Show("No se pudo tomar la carta del mazo",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					break;
				case 4:
					if (pila4->Count() == 0)
					{
						Movimiento(mazo, pila4, mazo->Count() - 1);
					}
					else {
						if (Verificar(mazo, pila4, mazo->Count() - 1, pila4->Count() - 1))
						{
							Movimiento(mazo, pila4, mazo->Count() - 1);
						}
						else {
							MessageBox::Show("No se pudo tomar la carta del mazo",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					break;
				case 5:
					if (pila5->Count() == 0)
					{
						Movimiento(mazo, pila5, mazo->Count() - 1);
					}
					else {
						if (Verificar(mazo, pila5, mazo->Count() - 1, pila5->Count() - 1))
						{
							Movimiento(mazo, pila5, mazo->Count() - 1);
						}
						else {
							MessageBox::Show("No se pudo tomar la carta del mazo",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					break;
				case 6:
					if (pila6->Count() == 0)
					{
						Movimiento(mazo, pila6, mazo->Count() - 1);
					}
					else {
						if (Verificar(mazo, pila6, mazo->Count() - 1, pila6->Count() - 1))
						{
							Movimiento(mazo, pila6, mazo->Count() - 1);
						}
						else {
							MessageBox::Show("No se pudo tomar la carta del mazo",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					break;
				case 7:
					if (pila7->Count() == 0)
					{
						Movimiento(mazo, pila7, mazo->Count() - 1);
					}
					else {
						if (Verificar(mazo, pila7, mazo->Count() - 1, pila7->Count() - 1))
						{
							Movimiento(mazo, pila7, mazo->Count() - 1);
						}
						else {
							MessageBox::Show("No se pudo tomar la carta del mazo",
								"Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Exclamation);
						}
					}
					break;
				default:
					MessageBox::Show("Grupo destino no v�lido",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
					break;
				}
				mostrarmazo(tbMazo, mazo);
				llenarPila(lbPila1, pila1);
				llenarPila(lbPila2, pila2);
				llenarPila(lbPila3, pila3);
				llenarPila(lbPila4, pila4);
				llenarPila(lbPila5, pila5);
				llenarPila(lbPila6, pila6);
				llenarPila(lbPila7, pila7);
				Ganar();
			}
			else {
				MessageBox::Show("El mazo esta vacio",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation);
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Ingreso de datos no v�lido",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbMazo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbPosicion_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lblCartamazoActual_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbDestinomazo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
		{
			RepartirCartas();
			mostrarmazo(tbMazo, mazo);
			llenarPila(lbPila1, pila1);
			llenarPila(lbPila2, pila2);
			llenarPila(lbPila3, pila3);
			llenarPila(lbPila4, pila4);
			llenarPila(lbPila5, pila5);
			llenarPila(lbPila6, pila6);
			llenarPila(lbPila7, pila7);
			btn_Repartir->Enabled = false;
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
