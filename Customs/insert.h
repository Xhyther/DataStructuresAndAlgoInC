void insertAtIndexSingly(Node** head, int data, int index) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (index == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    Node* temp = *head;
    for (int i = 0; i < index - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Index out of bounds\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtIndexDoubly(DNode** head, int data, int index) {
    DNode* newNode = (DNode*)malloc(sizeof(DNode));
    newNode->data = data;
    newNode->prev = newNode->next = NULL;

    if (index == 0) {
        newNode->next = *head;
        if (*head != NULL) {
            (*head)->prev = newNode;
        }
        *head = newNode;
        return;
    }

    DNode* temp = *head;
    for (int i = 0; i < index - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Index out of bounds\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
}

void insertAtIndexCircular(CNode** head, int data, int index) {
    CNode* newNode = (CNode*)malloc(sizeof(CNode));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        if (index == 0) {
            newNode->next = newNode;
            *head = newNode;
        } else {
            printf("Index out of bounds\n");
            free(newNode);
        }
        return;
    }

    if (index == 0) {
        CNode* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }

        newNode->next = *head;
        temp->next = newNode;
        *head = newNode;
        return;
    }

    CNode* temp = *head;
    for (int i = 0; i < index - 1 && temp->next != *head; i++) {
        temp = temp->next;
    }

    if (temp->next == *head && index > 0) {
        printf("Index out of bounds\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
