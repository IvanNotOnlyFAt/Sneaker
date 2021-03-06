delete from transaction_info;
delete from trolley_info;
delete from merchandise_info;
delete from store_info;
delete from trader_info;
delete from fans_info;
delete from user_info;

insert into user_info values ('admin', 'admin', '管理', '2017-04-26');
insert into user_info values ('TRA-101', '123456', '鞋商', '2017-04-26');
insert into user_info values ('TRA-102', '123456', '鞋商', '2016-04-26');
insert into user_info values ('TRA-103', '123456', '鞋商', '2017-04-26');
insert into user_info values ('TRA-104', '123456', '鞋商', '2014-04-26');
insert into user_info values ('TRA-105', '123456', '鞋商', '2017-04-26');

insert into user_info values ('FAN-401', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-402', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-403', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-404', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-405', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-406', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-407', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-408', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-409', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-410', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-411', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-412', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-413', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-414', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-415', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-416', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-417', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-418', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-419', '123456', '鞋友', '2018-12-25');
insert into user_info values ('FAN-420', '123456', '鞋友', '2018-12-25');

insert into trader_info values ('TRA-101', '苦克', '15535886548', '667788196608166646');
insert into trader_info values ('TRA-102', '马芸', '13888888888', '667788196608166645');
insert into trader_info values ('TRA-103', '雷均', '14366549854', '667788196608166644');
insert into trader_info values ('TRA-104', '马画疼', '13344556677', '667788196608166643');
insert into trader_info values ('TRA-105', '王减零', '15536555155', '667788196608166642');

insert into fans_info values ('FAN-401', '失眠多啦A梦', '15315555155');
insert into fans_info values ('FAN-402', 'IvanLxy', '15536566155');
insert into fans_info values ('FAN-403', 'MoMoCo', '15536555155');
insert into fans_info values ('FAN-404', '叶逢春', '15588555155');
insert into fans_info values ('FAN-405', '叶红鱼', '15599555155');
insert into fans_info values ('FAN-406', '夫子', '15536555885');
insert into fans_info values ('FAN-407', '李慢慢', '15536566155');
insert into fans_info values ('FAN-408', '君陌', '15536533155');
insert into fans_info values ('FAN-409', '魏光明', '14436555155');
insert into fans_info values ('FAN-410', '陈皮皮', '19936555155');
insert into fans_info values ('FAN-411', '张无忌', '18836555155');
insert into fans_info values ('FAN-412', '赵敏', '17736555155');
insert into fans_info values ('FAN-413', '周芷若', '16636555155');
insert into fans_info values ('FAN-414', '小昭', '18836555155');
insert into fans_info values ('FAN-415', '杨逍', '13655515566');
insert into fans_info values ('FAN-416', '殷离', '15536555177');
insert into fans_info values ('FAN-417', '范遥', '13623699999');
insert into fans_info values ('FAN-418', '殷天正', '18836555162');
insert into fans_info values ('FAN-419', '韦一笑', '15876554921');
insert into fans_info values ('FAN-420', '朱元璋', '18897854621');

insert into store_info values ('ST-100001', 'TRA-101', 'Nike旗舰店', '跑鞋、篮球鞋', '福建-莆田', 'ST-100001.jpg', '2019-12-25');
insert into store_info values ('ST-100002', 'TRA-102', 'LV专柜店', '奢侈品', '广东-深圳', 'ST-100002.jpg', '2020-01-25');
insert into store_info values ('ST-100003', 'TRA-103', 'Vans工厂店', '帆布鞋', '重庆', 'ST-100003.jpg', '2020-02-25');
insert into store_info values ('ST-100004', 'TRA-103', '李宁旗舰店', '运动类', '北京', 'ST-100004.jpg', '2018-01-02');
insert into store_info values ('ST-100005', 'TRA-104', 'addidas工厂店', '球鞋、运动鞋', '上海', 'ST-100005.jpg', '2019-08-25');

insert into merchandise_info values ('S-1000000000001', 'ST-100001', 'Nike耐克官方AIR FORCE', '599', '90', '34|35|36|37|38|39|40|41|42|43|44', '00-09', '款号: 315115,上市时间: 2016年秋季,鞋帮高度: 低帮,性别: 男子');
insert into merchandise_info values ('S-1000000000002', 'ST-100001', 'Air Jordan 1红脚趾篮球鞋', '699', '190', '34|35', '00-09', '款号: AR5339上市时间: 2018年冬季鞋帮高度: 低帮性别: 男子');
insert into merchandise_info values ('S-1000000000003', 'ST-100001', 'Nike耐克官方NIKE SB LOW XT滑板鞋', '799', '100', '34|35', '00-01', '款号: *****,上市时间: 2020年春季,鞋帮高度: 低帮,性别: 男子');
insert into merchandise_info values ('S-1000000000004', 'ST-100001', 'Nike男鞋AIR MAX 270气垫跑步鞋', '899', '1000', '34|35', '00-01', '款号: *****,上市时间: 2020年春季,鞋帮高度: 低帮,性别: 男子');
insert into merchandise_info values ('S-1000000000005', 'ST-100001', 'Jordan官方AIR JORDAN 1', '999', '999', '34|35', '00-01', '款号: *****,上市时间: 2020年春季,鞋帮高度: 低帮,性别: 男子');
insert into merchandise_info values ('S-2000000000001', 'ST-100002', 'TIME OUT 运动鞋', '1099', '999', '34|35', '00-01', '款号: *****,上市时间: 2020年春季,鞋帮高度: 低帮,性别: 男子');
insert into merchandise_info values ('S-2000000000002', 'ST-100002', 'LV ARCHLIGHT 运动靴', '399', '999', '34|35', '00-01', '款号: *****,上市时间: 2020年春季,鞋帮高度: 低帮,性别: 男子');
insert into merchandise_info values ('S-2000000000003', 'ST-100002', 'RIVOLI 运动靴', '7800', '999', '34|35', '00-01', '款号: *****,上市时间: 2020年春季,鞋帮高度: 低帮,性别: 男子');
insert into merchandise_info values ('S-3000000000001', 'ST-100003', 'Vans范斯 经典款系列 Old Skool板鞋', '559', '999', '34|35', '00-01', '款号: *****,上市时间: 2020年春季,鞋帮高度: 低帮,性别: 男子');
insert into merchandise_info values ('S-3000000000002', 'ST-100003', 'Vans范斯 经典系列 Sid DX板鞋', '569', '999', '34|35', '00-01', '款号: *****,上市时间: 2020年春季,鞋帮高度: 低帮,性别: 男子');
insert into merchandise_info values ('S-3000000000003', 'ST-100003', 'VANS范斯 Era 95 ', '579', '999', '36-45', '00-01', '');
insert into merchandise_info values ('S-3000000000004', 'ST-100003', 'Vans UAOG Era LX 黑白棋盘格低帮', '589', '999', '34|35', '00-01', '款号: *****,上市时间: 2020年春季,鞋帮高度: 低帮,性别: 男子');
insert into merchandise_info values ('S-3000000000005', 'ST-100003', 'Vans范斯 OG Style 36 LX 灯芯绒', '789', '999', '34|35', '00-01', '款号: *****,上市时间: 2020年春季,鞋帮高度: 低帮,性别: 男子');
insert into merchandise_info values ('S-4000000000001', 'ST-100004', '李宁跑步鞋男鞋赤兔4代', '199', '999', '34|35', '00-01', '');
insert into merchandise_info values ('S-4000000000002', 'ST-100004', '李宁小白鞋韦德之道', '299', '999', '34|35', '00-01', '');
insert into merchandise_info values ('S-4000000000003', 'ST-100004', '李宁篮球鞋男韦德之道空袭音速6', '99', '999', '34|35', '00-01', '款号: *****,上市时间: 2020年春季,鞋帮高度: 低帮,性别: 男子');

create view fans_view as select * from fans_info natural join user_info;
create view trader_view as select * from trader_info natural join user_info;










