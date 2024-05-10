#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Xml;
using namespace System::Collections::Generic;

List<String^>^ GetNodeNames(String^ filePath);

bool IsExist(String^ nodeName);

SortedSet<String^>^ GetDates(List<String^>^ filePath);

String^ GetDiscriptionByAttribute(String^ nodeName, String^ attributeValue, String^ Path);

String^ GetImageByAttribute(String^ nodeName, String^ attributeValue, String^ Path);

void AddNode(String^ nodeName, String^ name, String^ description, String^ priority);

void ChangeNode(String^ nodeName, String^ name, String^ description, String^ priority, String^ attributeValue);

void ChangeStatus(String^ nodeName, String^ attributeValue, String^ status);