.PHONY: clean All

All:
	@echo "----------Building project:[ pthread_once - Release ]----------"
	@cd "pthread_once" && "$(MAKE)" -f  "pthread_once.mk"
clean:
	@echo "----------Cleaning project:[ pthread_once - Release ]----------"
	@cd "pthread_once" && "$(MAKE)" -f  "pthread_once.mk" clean
