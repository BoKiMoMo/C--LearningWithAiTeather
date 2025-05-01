
# 📚 C++ 專業註解教學大全（含 Class 版）

---

## ✨ 為什麼要寫專業註解？

- 讓自己與他人快速理解程式結構與功能
- 提高維護性、可讀性
- 支援 Doxygen 生成自動化文件
- 在團隊開發與公開專案（如 GitHub）中顯得更專業

---

## 📋 Doxygen 標準註解基礎

### 1️⃣ 檔案註解 `@file`

```cpp
/**
 * @file filename.cpp
 * @brief 檔案的主要功能描述
 * @author YourName
 * @date 2025-05-02
 */
```

---

### 2️⃣ 函式註解 `@brief @param @return`

```cpp
/**
 * @brief 描述函式功能
 * @param 參數名稱 說明該參數的用途
 * @return 說明回傳值
 */
int add(int a, int b) {
    return a + b;
}
```

---

### 3️⃣ 類別註解 `@class @brief`

```cpp
/**
 * @class Student
 * @brief 處理學生基本資料與成績
 */
class Student {
private:
    string name; ///< 學生姓名
    int grade; ///< 學生成績

public:
    /**
     * @brief 建構子，初始化學生資料
     * @param n 學生姓名
     * @param g 學生成績
     */
    Student(string n, int g);

    /**
     * @brief 顯示學生資料
     */
    void display();
};
```

---

### 4️⃣ 變數註解 `///<`

```cpp
int score; ///< 使用者輸入的成績
```

---

## 📈 使用時機與規範

| 元素        | 是否需要註解 | 說明                        |
|-------------|--------------|------------------------------|
| 檔案開頭    | ✅             | 簡述整體檔案用途            |
| 每個函式    | ✅             | 描述功能、參數、回傳值      |
| 類別/結構體 | ✅             | 描述用途與每個方法          |
| 重要變數    | ✅             | 說明變數用途                |
| 流程分段    | ✅             | 用 `// === 標題 ===` 做區隔 |

---

## 📚 完整示範（含 Class）

```cpp
/**
 * @file student_system.cpp
 * @brief 處理學生資料輸入與顯示功能
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * @class Student
 * @brief 代表一個學生與其成績。
 */
class Student {
private:
    string name; ///< 學生姓名
    int grade;   ///< 學生成績

public:
    /**
     * @brief 建構子，初始化學生資料。
     * @param n 學生姓名
     * @param g 學生成績
     */
    Student(string n, int g) : name(n), grade(g) {}

    /**
     * @brief 顯示學生姓名與成績。
     */
    void display() {
        cout << "姓名: " << name << ", 成績: " << grade << endl;
    }
};

/**
 * @brief 主程式，測試學生資料輸入與顯示。
 * @return int 程式結束狀態
 */
int main() {
    // === 建立一位學生並顯示資料 ===
    Student stu("BoKiMoMo", 95);
    stu.display();

    return 0;
}
```

---

## 🎯 註解小技巧小結

- 註解應該寫「為什麼」做，不只是「做了什麼」
- 每個重要功能單元前必須有清楚標記
- 保持格式一致、語氣簡潔
- 後期專案可以直接生成技術文檔（超加分）

---

# ✅ 標準註解速查表

| 類型     | 範例                      |
|----------|----------------------------|
| 檔案說明 | `@file` `@brief` `@author` |
| 函式說明 | `@brief` `@param` `@return` |
| 類別說明 | `@class` `@brief`           |
| 變數說明 | `///<`                      |

---

📢 養成好習慣，從現在開始，讓你的每個專案都專業起來！
