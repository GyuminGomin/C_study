-- 이건 주석
SELECT COUNT(*) FROM hrinfo; -- hrinfo안에 모든 데이터가 몇개 있는지 확인해줘

-- 데이터 모두 가져오기
SELECT * FROM hrinfo WHERE id = 1; -- DB안의 데이터테이블안의 내용을 가져다 오는 것

-- 데이터 입력
INSERT INTO hrinfo (name, reg_date) 
VALUES ('애슐리', '2022-01-31 12:10:20');
books_info
-- 데이터 수정
UPDATE hrinfo SET
	name = '애누리',
    reg_date = '2021-12-30'
WHERE id = 2; -- id를 설정안하면 모든 데이터들이 다 바뀐다!!!

-- 데이터 삭제
DELETE FROM hrinfo
	WHERE id = 2;