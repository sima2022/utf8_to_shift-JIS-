#pragma once
// UTF-8 → SJIS変換用構造体
typedef struct {
    uint8_t utf8[3];
    uint8_t sjis[2];
} Utf8SjisPair;

// 変換テーブル外部宣言
extern const Utf8SjisPair conv_table[];
extern const size_t conv_table_size;
