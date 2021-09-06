/*
 Navicat Premium Data Transfer

 Source Server         : liryi
 Source Server Type    : MySQL
 Source Server Version : 80019
 Source Host           : localhost:3306
 Source Schema         : dalong

 Target Server Type    : MySQL
 Target Server Version : 80019
 File Encoding         : 65001

 Date: 06/09/2021 09:04:55
*/

SET NAMES utf8;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for student
-- ----------------------------
DROP TABLE IF EXISTS `student`;
CREATE TABLE `student` (
  `id` int NOT NULL,
  `name` varchar(255) DEFAULT NULL,
  `age` int DEFAULT NULL,
  `score` int DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of student
-- ----------------------------
BEGIN;
INSERT INTO `student` VALUES (1, 'xm', 12, 95);
INSERT INTO `student` VALUES (3, 'xj', 15, 45);
INSERT INTO `student` VALUES (4, 'xy', 16, 47);
INSERT INTO `student` VALUES (5, 'x', 1, 5);
COMMIT;

SET FOREIGN_KEY_CHECKS = 1;
