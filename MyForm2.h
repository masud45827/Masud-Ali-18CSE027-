#pragma once

namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;








	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(138, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Matrix Equation Solve";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(193, 384);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 38);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"A(1,1) :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(69, 108);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 20);
			this->textBox1->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(131, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 20);
			this->label3->TabIndex = 12;
			this->label3->Text = L"A(1,2) :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(205, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(51, 20);
			this->textBox2->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(262, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"A(1,3) :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(333, 103);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(49, 20);
			this->textBox3->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(396, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L"D(1) :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(456, 100);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(53, 20);
			this->textBox4->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 20);
			this->label6->TabIndex = 18;
			this->label6->Text = L"A(2,1) :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(131, 148);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 20);
			this->label7->TabIndex = 19;
			this->label7->Text = L"A(2,2) :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(262, 145);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 20);
			this->label8->TabIndex = 20;
			this->label8->Text = L"A(2,3) :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(3, 194);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(68, 20);
			this->label9->TabIndex = 21;
			this->label9->Text = L"A(3,1) :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(69, 147);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(53, 20);
			this->textBox5->TabIndex = 22;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(205, 146);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(51, 20);
			this->textBox6->TabIndex = 23;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(333, 145);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(49, 20);
			this->textBox7->TabIndex = 24;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(456, 137);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(53, 20);
			this->textBox8->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(396, 144);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 20);
			this->label10->TabIndex = 26;
			this->label10->Text = L"D(2) :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(131, 193);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(68, 20);
			this->label11->TabIndex = 27;
			this->label11->Text = L"A(3,2) :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(262, 193);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(68, 20);
			this->label12->TabIndex = 28;
			this->label12->Text = L"A(3,3) :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(396, 193);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(54, 20);
			this->label13->TabIndex = 29;
			this->label13->Text = L"D(3) :";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(71, 194);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(53, 20);
			this->textBox9->TabIndex = 30;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(205, 193);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(51, 20);
			this->textBox10->TabIndex = 31;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(333, 192);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(49, 20);
			this->textBox11->TabIndex = 32;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(456, 191);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(53, 20);
			this->textBox12->TabIndex = 33;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(175, 234);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 31);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click_1);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(162, 277);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(46, 20);
			this->label14->TabIndex = 35;
			this->label14->Text = L" X = ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(132, 245);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 36;
			this->label15->Click += gcnew System::EventHandler(this, &MyForm2::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(212, 278);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(78, 20);
			this->label16->TabIndex = 37;
			this->label16->Text = L"No Input";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(163, 312);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(46, 20);
			this->label17->TabIndex = 38;
			this->label17->Text = L" Y = ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(212, 310);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(78, 20);
			this->label18->TabIndex = 39;
			this->label18->Text = L"No Input";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(163, 344);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(45, 20);
			this->label19->TabIndex = 40;
			this->label19->Text = L" Z = ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(214, 344);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(78, 20);
			this->label20->TabIndex = 41;
			this->label20->Text = L"No Input";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(46, 51);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(475, 20);
			this->label21->TabIndex = 42;
			this->label21->Text = L"matrix order must be 3X3 and matrix equation format Ax=d";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 472);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String ^ in = textBox1->Text;
	 Double a11 = System::Convert::ToDouble(in);
	 String ^ ix = textBox2->Text;
	 Double a12= System::Convert::ToDouble(ix);
	 String ^ iv = textBox3->Text;
	 Double a13 = System::Convert::ToDouble(iv);
	 String ^ ib = textBox4->Text;
	 Double d1 = System::Convert::ToDouble(ib);

	 String ^ im = textBox5->Text;
	 Double a21 = System::Convert::ToDouble(im);
	 String ^ ik = textBox6->Text;
	 Double a22 = System::Convert::ToDouble(ik);
	 String ^ ip = textBox7->Text;
	 Double a23 = System::Convert::ToDouble(ip);
	 String ^ iw = textBox8->Text;
	 Double d2 = System::Convert::ToDouble(iw);

	 String ^ ig = textBox9->Text;
	 Double a31 = System::Convert::ToDouble(ig);
	 String ^ il = textBox10->Text;
	 Double a32 = System::Convert::ToDouble(il);
	 String ^ iz = textBox11->Text;
	 Double a33 = System::Convert::ToDouble(iz);
	 String ^ iq = textBox12->Text;
	 Double d3 = System::Convert::ToDouble(iq);
	 Double d = a11*((a22*a33) - (a32*a23))-a12*((a21*a33)-(a31*a23))+a13*((a21*a32)-(a31*a22));
	 Double dx = d1*((a22*a33) - (a32*a23)) - a12*((d2*a33) - (d3*a23)) + a13*((d2*a32) - (d3*a22));
	 Double dy = a11*((d2*a33) - (d3*a23)) - d1*((a21*a33) - (a31*a23)) + a13*((a21*d3) - (a31*d2));
	 Double dz = a11*((a22*d3) - (a32*d2)) - a12*((a21*d3) - (a31*d2)) + d1*((a21*a32) - (a31*a22));
	 Double x = dx / d;
	 Double y = dy / d;
	 Double z = dz/ d;
	 if (d == 0)
	 {
		 String ^s;
		 s = "No Solution";
		 in = System::Convert::ToString(s);
		 label16->Text = in;
		 in = System::Convert::ToString(s);
		 label18->Text = in;
		 in = System::Convert::ToString(s);
		 label20->Text = in;

	 }
	 else
	 {
		 in = System::Convert::ToString(x);
		 label16->Text = in;
		 in = System::Convert::ToString(y);
		 label18->Text = in;
		 in = System::Convert::ToString(z);
		 label20->Text = in;
	 }
	 


}
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
