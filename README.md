﻿# Console-chat
Создал три класса 
User, Message, Chat
1)User(пользователь) : У нас есть поля типа string
-для регистрация : name (Имя пользователя), login(Логин), password(пароль)
-для входа в чат: login(Логин), password(пароль)
-методы геттеры и сеттеры

2)Message(Текст сообшение): у нас есть поля типа string
  from (от кого сообщение), to (кому сообщение) и msg (текст сообщение) 


3)Chat : реализована методы работе с Пользователем(User) и с текстом сообшение(Message)
мы используем векторы (vector) для динамического массива и умны указател (shared_ptr) для распледеление и освобождение памяти  