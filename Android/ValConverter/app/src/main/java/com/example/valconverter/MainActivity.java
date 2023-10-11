package com.example.valconverter;

import androidx.appcompat.app.AppCompatActivity;

import android.view.View;
//import android.widget.Button;
//import android.widget.TextView;
import android.widget.*;
import android.os.Bundle;

public class MainActivity extends AppCompatActivity {
    private Button button;
    private TextView textview;
    private EditText editText;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        button.setOnClickListener(new View.OnClickListener()
        {
            @Override
            public void onClick(View view) {
            }
        });
    }
    public void Cal(View view)
    {
        Toast.makeText(MainActivity.this, "Hi You Press The Button listener", Toast.LENGTH_SHORT).show();
        String num = editText.getText().toString();
        int kg = Integer.parseInt(num);
        double pound = kg*2.205;
        textview.setText("The corresponding value in pounds : " + pound);
    }
}