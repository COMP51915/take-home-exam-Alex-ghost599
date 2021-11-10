test: *.cc
	@echo "===============Start Compiling==============="
	@g++ -o q1 q1.cc -lm
	@echo "Answer for Q1:-------------------------------"
	@echo ""
	@./q1
	@echo ""
	@g++ -o q2 q2.cc
	@echo "Answer for Q2:-------------------------------"
	@echo ""
	@./q2
	@echo ""
	@g++ -o q3 q3.cc
	@echo "Answer for Q3:-------------------------------"
	@echo ""
	@./q3
	@echo ""
	@g++ -o q4 q4.cc
	@echo "Answer for Q4:-------------------------------"
	@echo ""
	@./q4
	@echo ""
	@rm q1 q2 q3 q4
	@echo "================End Compiling================"